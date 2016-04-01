#pragma once
#include "renderer\DrawCallManager.hpp"

class VulkanDrawCallManager : public DrawCallManager
{
public:
	VulkanDrawCallManager();
	~VulkanDrawCallManager();
};

