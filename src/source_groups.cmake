# top-level files
set(file_root
        Application.cpp
        Application.hpp
        main.cpp
        )

set(file_renderer
        renderer/BufferObject.hpp
        renderer/DrawCall.hpp
        renderer/DrawCallManager.hpp
        renderer/Renderer.hpp
        renderer/ShaderParameters.hpp
        renderer/ShaderProgram.hpp
        renderer/VertexLayout.hpp
        )

set(file_renderer_opengl
        renderer/opengl/GL3BufferObject.cpp
        renderer/opengl/GL3BufferObject.hpp
        renderer/opengl/GL3DrawCall.cpp
        renderer/opengl/GL3DrawCall.hpp
        renderer/opengl/GL3DrawCallManager.cpp
        renderer/opengl/GL3DrawCallManager.hpp
        renderer/opengl/GL3Renderer.cpp
        renderer/opengl/GL3Renderer.hpp
        renderer/opengl/GL3ShaderParameters.cpp
        renderer/opengl/GL3ShaderParameters.hpp
        renderer/opengl/GL3ShaderProgram.cpp
        renderer/opengl/GL3ShaderProgram.hpp
        renderer/opengl/GL3VertexLayout.cpp
        renderer/opengl/GL3VertexLayout.hpp
        )

set(file_util
        util/DefaultFileLoader.hpp
        util/DefaultFileLoader.cpp
        util/FileLoader.hpp
        util/Timing.hpp
        util/Timing.cpp
        )

# the source groups
source_group("" FILES ${file_root})
source_group("Renderer" FILES ${file_renderer})
source_group("Renderer\\opengl" FILES ${file_renderer_opengl})
source_group("Util" FILES ${file_util})

# append all files to the file_root
set(file_root
        ${file_root}
        ${file_renderer}
        ${file_renderer_opengl}
        ${file_util}
        )