#pragma once
#include "ISceneBuilder.h"

class BuildSettings : public ISceneBuilder
{
public:
	void Build(GameContext& context) override;
};

