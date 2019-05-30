#include "pch.h"
#include "PlayScene.h"
#include "SceneCommons.h"
#include "SceneManager.h"

void PlayScene::Build(GameContext& context)
{
	auto text = std::make_shared<FontObject>(L"logofont.spritefont", L"�v���C�V�[��");
	context << text;

	class C : public GameObject
	{
		float lastTime;
		std::shared_ptr<FontObject> m_text;

	public:
		C(const std::shared_ptr<FontObject>& text)
			: m_text(text) {}

		void Initialize(GameContext& context)
		{
			lastTime = context.GetTimer().GetTotalSeconds();
		}

		void Update(GameContext& context)
		{
			float time = context.GetTimer().GetTotalSeconds() - lastTime;

			wchar_t str[256];
			std::swprintf(str, L"�v���C�V�[��: �c��%.2f�b", 3 - time);

			m_text->SetText(str);

			if (time > 3.f)
				context.GetSceneManager().LoadScene("ResultScene");
		}
	};
	context << std::make_shared<C>(text);
}
