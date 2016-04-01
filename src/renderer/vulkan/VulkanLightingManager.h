#pragma once
#include "renderer\LightingManager.hpp"
class VulkanLightingManager :
	public LightingManager
{
public:
	VulkanLightingManager();
	~VulkanLightingManager();
};

