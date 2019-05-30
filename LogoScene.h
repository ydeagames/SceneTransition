#pragma once
#include "ISceneBuilder.h"

class LogoScene : public ISceneBuilder
{
public:
	void Build(GameContext& context) override;
};

