#include "stdafx.h"
#include "Player.h"
#include "GameCamera.h"

Player::Player()
{

}

Player::~Player()
{

}

bool Player::Start()
{
	m_charaCon.Init(
		20.0f,
		100.0f,
		m_pos
	);

	m_modelRender.Init("Assets/modelData/unityChan.tkm");

	gameCamera = FindGO<GameCamera>("gameCamera");

	return true;
}

void Player::Update()
{
	m_moveSpeed.x = 0.0f;
	m_moveSpeed.z = 0.0f;

	SetPlayerSpeed(120.0f);



	if (g_pad[0]->IsTrigger(enButtonA) && m_charaCon.IsOnGround()) {
		m_moveSpeed.y = 400.0f;
	}
	//m_moveSpeed.y -= 980.0f * g_gameTime->GetFrameDeltaTime();

	m_pos = m_charaCon.Execute(m_moveSpeed, g_gameTime->GetFrameDeltaTime());
	if (m_charaCon.IsOnGround()) {
		m_moveSpeed.y = 0.0f;
	}

	m_modelRender.SetPosition(m_pos);

	m_modelRender.SetScale(0.2f, 0.2f, 0.2f);
	m_modelRender.Update();
}

void Player::Render(RenderContext& rc)
{
	m_modelRender.Draw(rc);
}

void Player::SetPlayerSpeed(float speed)
{
	Vector3 stickL;
	stickL.x = g_pad[0]->GetLStickXF();
	stickL.y = g_pad[0]->GetLStickYF();

	Vector3 forward = g_camera3D->GetForward();
	Vector3 right = g_camera3D->GetRight();

	forward.y = 0.0f;
	right.y = 0.0f;

	right *= stickL.x * speed;
	forward *= stickL.y * speed;

	m_moveSpeed += right + forward;
}
