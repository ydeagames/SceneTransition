#include "pch.h"
#include "LogoScene.h"
#include "SceneCommons.h"
#include "SceneManager.h"

void LogoScene::Build(GameContext& context)
{
	auto text = std::make_shared<FontObject>(L"logofont.spritefont", L"���S�V�[��");
	context << text;

	class A : public GameObject
	{
		float lastTime;
		std::shared_ptr<FontObject> m_text;

	public:
		A(const std::shared_ptr<FontObject>& text)
			: m_text(text) {}

		void Initialize(GameContext& context)
		{
			lastTime = context.GetTimer().GetTotalSeconds();
		}

		void Update(GameContext& context)
		{
			float time = context.GetTimer().GetTotalSeconds() - lastTime;

			wchar_t str[256];
			std::swprintf(str, L"���S�V�[��: %.2f�b", time);

			m_text->SetText(str);

			if (time > 3.f)
				context.GetSceneManager().LoadScene("TitleScene");
		}
	};
	context << std::make_shared<A>(text);
}
