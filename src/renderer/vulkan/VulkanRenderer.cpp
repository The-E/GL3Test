#include "VulkanRenderer.hpp"


VulkanRenderer::~VulkanRenderer()
{
}

SDL_Window * VulkanRenderer::initialize(std::unique_ptr<FileLoader>&& fileLoader)
{
	return nullptr;
}

SDL_Window * VulkanRenderer::getWindow()
{
	return nullptr;
}

DrawCallManager * VulkanRenderer::getDrawCallManager()
{
	return nullptr;
}

LightingManager * VulkanRenderer::getLightingManager()
{
	return nullptr;
}

std::unique_ptr<BufferObject> VulkanRenderer::createBuffer(BufferType type)
{
	return std::unique_ptr<BufferObject>();
}

std::unique_ptr<VertexLayout> VulkanRenderer::createVertexLayout()
{
	return std::unique_ptr<VertexLayout>();
}

std::unique_ptr<Texture2D> VulkanRenderer::createTexture()
{
	return std::unique_ptr<Texture2D>();
}

void VulkanRenderer::clear(const glm::vec4 & color)
{
}

void VulkanRenderer::presentNextFrame()
{
}

void VulkanRenderer::deinitialize()
{
}
