#include "hzpch.h"
#include "OrthographicCamera.h"
#include <glm/gtc/matrix_transform.hpp>

namespace Hazel {
	OrthographicCamera::OrthographicCamera(float left, float right, float bottom, float top)
	{
		m_ProjfectionMatrix = { glm::ortho(left, right, bottom, top, -1.0f, 1.0f) };
		m_ViewMatrix = 1.0f;
		m_ViewProjectionMatrix = m_ProjfectionMatrix * m_ViewMatrix;
	}

	void OrthographicCamera::RecalculationViewMatirx()
	{
		glm::mat4 transform = glm::translate(glm::mat4(1.0f), m_Position) 
			* glm::rotate(glm::mat4(1.0f), glm::radians(m_Rotation), glm::vec3(0.0, 0.0f, 1.0f));

		m_ViewMatrix = glm::inverse(transform);
		m_ViewProjectionMatrix = m_ProjfectionMatrix * m_ViewMatrix;
	}

	glm::vec3 OrthographicCamera::GetFront() const
	{
		return { 0, 0, 0 };
	}

	glm::vec3 OrthographicCamera::GetRight() const
	{
		return { 0, 0, 0 };
	}

	void Rotate(float yaw, float pitch)
	{

	}
}