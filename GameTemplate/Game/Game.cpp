#include "stdafx.h"
#include "Game.h"
#include "MyLevel.h"
#include "Player.h"
#include "BackGround.h"
#include "GameCamera.h"
#include "Cade.h"

bool Game::Start()
{
	m_level = NewGO<MyLevel>(0, "level");
	m_player = NewGO<Player>(0, "player");
	m_backGround = NewGO<BackGround>(0, "backkGround");
	m_gameCamera = NewGO<GameCamera>(0, "gameCamera");
	m_cade = NewGO<app::actor::FireCade>(0, "cade");
	
	return true;
}

void Game::Update()
{
	// g_renderingEngine->DisableRaytracing();
	m_modelRender.Update();
}