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
	//移動速度設定。
	void SetPlayerSpeed(float speed);

private:
	GameCamera* gameCamera;

	ModelRender m_modelRender;
	Vector3 m_pos;
	Quaternion m_rot;
	CharacterController m_charaCon;
	Vector3 m_moveSpeed;

	//外部参照。
public:
	//最初の一回のみLevelクラスよりアクセス。
	const void InitSetPos(Vector3 pos){
		m_pos = pos;
	}

	const Vector3& GetPos() {
		return m_pos;
	}
};

