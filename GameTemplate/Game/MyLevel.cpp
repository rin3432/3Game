#include "stdafx.h"
#include "MyLevel.h"
#include "Player.h"

MyLevel::~MyLevel()
{

}

bool MyLevel::Start()
{
	player = FindGO<Player>("player");

	m_levelRender.Init("Assets/Level/GameMapLevel.tkl", [&](LevelObjectData& objData) {
		if (objData.EqualObjectName(L"PlayerPoint") == true) {
			player->InitSetPos(objData.position);

			return true;
		}
		else if (objData.EqualObjectName(L"FireCadePoint") == true) {
			m_CadePos[enCadeNo_Fire] = objData.position;

			return true;
		}
		else if (objData.EqualObjectName(L"GrowCadePoint") == true) {
			m_CadePos[enCadeNo_Grow] = objData.position;

			return true;
		}
		return true;
	});

	return true;
}
