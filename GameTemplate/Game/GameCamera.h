#pragma once

class Player;

class GameCamera : public IGameObject
{
public:
	GameCamera();
	~GameCamera();
	bool Start();
	void Update();
	void Render(RenderContext& rc);

private:
	Player* m_player;

	Vector3 m_toCameraPos;
	Vector3 m_target;
	Vector3 m_pos;
};

