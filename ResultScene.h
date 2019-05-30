#pragma once
#include "ISceneBuilder.h"

class ResultScene : public ISceneBuilder
{
public:
	void Build(GameContext& context) override;
};

