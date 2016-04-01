#pragma once
#include "renderer\Renderer.hpp"
#include "renderer\vulkan\VulkanDrawCallManager.h"
#include "renderer\vulkan\VulkanLightingManager.h"
#include "renderer\vulkan\VulkanShaderManager.h"

class VulkanRenderer : public Renderer
{
private:
	SDL_GLContext _context;
	SDL_Window *_window;

	std::unique_ptr<FileLoader> _fileLoader;

	std::unique_ptr<VulkanDrawCallManager> _drawCallManager;
	std::unique_ptr<VulkanLightingManager> _lightingManager;
	std::unique_ptr<VulkanShaderManager> _shaderManager;

public:
	~VulkanRenderer();    
	
	virtual SDL_Window *initialize(std::unique_ptr<FileLoader> &&fileLoader) override;

	virtual SDL_Window *getWindow() override;

	virtual DrawCallManager *getDrawCallManager() override;

	virtual LightingManager *getLightingManager() override;

	virtual std::unique_ptr<BufferObject> createBuffer(BufferType type) override;

	virtual std::unique_ptr<VertexLayout> createVertexLayout() override;

	virtual std::unique_ptr<Texture2D> createTexture() override;

	virtual void clear(const glm::vec4 &color) override;

	virtual void presentNextFrame() override;

	virtual void deinitialize() override;
};

