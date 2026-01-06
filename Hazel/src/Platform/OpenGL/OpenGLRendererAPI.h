#pragma once

#include "Hazel/Renderer/RendererAPI.h"

namespace Hazel {

	class OpenGLRendererAPI : public RendererAPI
	{
		void Clear() override;

		void SetClearColor(const glm::vec4& color) override;

		void DrawIndexed(const Hazel::Ref<VertexArray>& vertexArray) override;
	};
}
