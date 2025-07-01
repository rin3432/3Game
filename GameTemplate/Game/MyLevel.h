#pragma once

class Player;
class MyLevel : public IGameObject
{
public:
	~MyLevel();
	bool Start();
private:
	Player* player;

	LevelRender m_levelRender;
	Vector3 m_CadePos[];

	enum EnCadeNo {
		enCadeNo_Fire,
		enCadeNo_Grow,
		enCadeNo_Heal,
		enCadeNo_Num,
	};
};

