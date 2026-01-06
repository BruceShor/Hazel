#pragma once
#include "Hazel/Core.h"
#include "Hazel/Core/TimeStep.h"
#include "Hazel/Events/Event.h"

namespace Hazel
{ 
	class HAZEL_API Layer
	{
	public:
		Layer(const std::string& name = "Layer");
		virtual ~Layer() = default;

		virtual void OnAttach() {}
		virtual void OnDetach() {}
		virtual void OnUpdate(TimeStep timestep) {}
		virtual void OnEvent(Event& event) {}
		virtual void OnImGuiRender(){}

		const std::string& GetName() const { return m_DebugName; }

	private:
		std::string m_DebugName;
	};

}

