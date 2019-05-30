#pragma once
#include "ISceneBuilder.h"

class TitleScene : public ISceneBuilder
{
public:
	void Build(GameContext& context) override;
};

