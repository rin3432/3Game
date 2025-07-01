#pragma once

class GameCamera;
class Player : public IGameObject
{
public:
	Player();
	~Player();
	bool Start();
	void Update();
	void Render(RenderContext& rc);
	//�ړ����x�ݒ�B
	void SetPlayerSpeed(float speed);

private:
	GameCamera* gameCamera;

	ModelRender m_modelRender;
	Vector3 m_pos;
	Quaternion m_rot;
	CharacterController m_charaCon;
	Vector3 m_moveSpeed;

	//�O���Q�ƁB
public:
	//�ŏ��̈��̂�Level�N���X���A�N�Z�X�B
	const void InitSetPos(Vector3 pos){
		m_pos = pos;
	}

	const Vector3& GetPos() {
		return m_pos;
	}
};

