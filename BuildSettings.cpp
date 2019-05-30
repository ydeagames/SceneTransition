#include "pch.h"
#include "BuildSettings.h"
#include "SceneManager.h"
#include "BaseScene.h"
#include "LogoScene.h"
#include "TitleScene.h"
#include "PlayScene.h"
#include "ResultScene.h"

void BuildSettings::Build(GameContext& context)
{
	context.GetSceneManager().Register<BaseScene>("BaseScene");
	context.GetSceneManager().Register<LogoScene>("LogoScene");
	context.GetSceneManager().Register<TitleScene>("TitleScene");
	context.GetSceneManager().Register<PlayScene>("PlayScene");
	context.GetSceneManager().Register<ResultScene>("ResultScene");

	context.GetSceneManager().LoadScene("BaseScene");
}
