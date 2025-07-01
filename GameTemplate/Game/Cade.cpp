#include "stdafx.h"
#include "Cade.h"

namespace {
	Vector3 InitScalar = { 0.1f,0.1f,0.1f };
}

namespace app {
	namespace actor {
		/***************************************************/
		FireCade::FireCade()
			:CadeBase()
		{
		}

		FireCade::~FireCade()
		{
		}

		bool FireCade::Start()
		{
			InitModel();
			m_modelRender.SetScale(InitScalar);

			return true;
		}

		void FireCade::Update()
		{
			m_modelRender.Update();
		}

		void FireCade::Render(RenderContext& rc)
		{
			m_modelRender.Draw(rc);
		}

		/**********************************************************/

		GrowCade::GrowCade()
			:CadeBase()
		{
		}

		GrowCade::~GrowCade()
		{
		}

		bool GrowCade::Start()
		{
			InitModel();
			m_modelRender.SetScale(InitScalar);

			return true;
		}

		void GrowCade::Update()
		{
			m_modelRender.Update();
		}

		void GrowCade::Render(RenderContext& rc)
		{
			m_modelRender.Draw(rc);
		}

		/*************************************************************/

		HealCade::HealCade()
			:CadeBase()
		{
		}

		HealCade::~HealCade()
		{
		}

		bool HealCade::Start()
		{
			InitModel();
			m_modelRender.SetScale(InitScalar);

			return true;
		}

		void HealCade::Update()
		{
			m_modelRender.Update();
		}

		void HealCade::Render(RenderContext& rc)
		{
			m_modelRender.Draw(rc);
		}

	}
}
