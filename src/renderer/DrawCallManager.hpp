#pragma once

#include "DrawCall.hpp"
#include "ShaderParameters.hpp"

#include <memory>

class VertexLayout;

class PipelineState;

enum class ShaderType {
    Mesh,
    LightedMesh
};

struct DrawCallProperties {
    VertexLayout *vertexLayout;
    PipelineState *state;
};

enum class PrimitiveType {
    Triangle
};

enum class IndexType {
    Short,
    Integer
};

class DrawCallManager {
public:
    virtual ~DrawCallManager() { }

    virtual std::unique_ptr<DrawCall> createDrawCall(const DrawCallProperties &props, PrimitiveType type,
                                                     size_t offset, size_t count) = 0;

    virtual std::unique_ptr<DrawCall> createIndexedCall(const DrawCallProperties &props, PrimitiveType type,
                                                        size_t offset, size_t count, IndexType indexType) = 0;
};
