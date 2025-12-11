#pragma once
#include "Hazel/Layer.h"
namespace Hazel {
	class HAZEL_API ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer();

		void OnEvent(Event& event);
		void OnUpdate();
		void OnAttach();
		void OnDetach();
	private:
		float m_Time = 0.0f;
	};
}

