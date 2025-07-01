#pragma once

namespace app {
	namespace actor {
		class CadeBase : public IGameObject {
		protected:
			ModelRender m_modelRender;
			PhysicsStaticObject m_physicsStaticObject;
			Vector3 m_pos;
		public:
			CadeBase() {}
			~CadeBase() {}
			virtual void InitModel() = 0;

			void Render(RenderContext& rc) { m_modelRender.Draw(rc); }

		public:
			inline const Vector3& GetPos() const { return m_pos; }
			inline void SetPos(const Vector3& pos) { m_pos.Set(pos); }
		};

		class FireCade : public CadeBase {
		public:
			FireCade();
			virtual ~FireCade();

			bool Start() override;
			void Update() override;
			void Render(RenderContext& rc) override;

			void InitModel(){
				m_modelRender.Init("Assets/modelData/cade/fire-cade.tkm");
				//m_physicsStaticObject.CreateFromModel(m_modelRender.GetModel(), m_modelRender.GetModel().GetWorldMatrix());
			}
		};

		class GrowCade : public CadeBase {
		public:
			GrowCade();
			virtual ~GrowCade();

			bool Start() override;
			void Update() override;
			void Render(RenderContext& rc) override;

			void InitModel() {
				m_modelRender.Init("Assets/modelData/cade/grow-cade.tkm");
				//m_physicsStaticObject.CreateFromModel(m_modelRender.GetModel(), m_modelRender.GetModel().GetWorldMatrix());
			}
		};

		class HealCade : public CadeBase {
		public:
			HealCade();
			virtual ~HealCade();

			bool Start() override;
			void Update() override;
			void Render(RenderContext& rc) override;

			void InitModel() {
				m_modelRender.Init("Assets/modelData/cade/heal-cade.tkm");
				//m_physicsStaticObject.CreateFromModel(m_modelRender.GetModel(), m_modelRender.GetModel().GetWorldMatrix());
			}
		};
	}
}
