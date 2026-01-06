#pragma once

#include "Hazel/Renderer/VertexArray.h"

namespace Hazel {
	class OpenGLVertexArrays : public VertexArray
	{
	public:
		OpenGLVertexArrays();
		virtual ~OpenGLVertexArrays();

		virtual void Bind() const override;
		virtual void UnBind() const override;

		virtual void AddVertexBuffer(const Hazel::Ref<VertexBuffer>& VertexBuffer) override;
		virtual void SetIndexBuffer(const Hazel::Ref<IndexBuffer>& IndexBuffer) override;

		virtual const std::vector<Hazel::Ref<VertexBuffer>>& GetVertexBuffers() const { return m_VertexBuffers; }
		virtual const Hazel::Ref<IndexBuffer>& GetIndexBuffers() const { return m_IndexBuffers; }

		static VertexBuffer* Create();

	private:
		std::vector<Hazel::Ref<VertexBuffer>> m_VertexBuffers;
		Hazel::Ref<IndexBuffer> m_IndexBuffers;
		uint32_t m_RendererID;
	};
}

