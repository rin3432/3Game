#pragma once

class MyLevel;
class Player;
class BackGround;
class GameCamera;
namespace app {
	namespace actor {
		class FireCade;
	}
}


class Game : public IGameObject
{
public:
	Game() {}
	~Game() {}
	bool Start();
	void Update();

private:
	Player* m_player;
	BackGround* m_backGround;
	GameCamera* m_gameCamera;
	MyLevel* m_level;
	app::actor::FireCade* m_cade;

	ModelRender m_modelRender;
};

