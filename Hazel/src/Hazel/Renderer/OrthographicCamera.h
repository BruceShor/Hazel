#pragma once

#include <glm/glm.hpp>

namespace Hazel {
	class OrthographicCamera
	{
	public:
		OrthographicCamera(float left, float right, float bottom, float top);

		const glm::vec3& GetPosition() const { return m_Position; }
		void SetPosition(const glm::vec3& positon) { m_Position = positon; RecalculationViewMatirx(); }
		void ResetPosition() { m_Position = { 0.0f, 0.0f, 0.0f }; m_Rotation = 0.0f; RecalculationViewMatirx(); }
		void SetRotation(float rotation) { m_Rotation = rotation; RecalculationViewMatirx(); }
		float GetRotation() const { return m_Rotation; }

		glm::vec3 GetFront() const;
		glm::vec3 GetRight() const;
		void Rotate(float yaw, float pitch);

		const glm::mat4& GetProjectionMatrix() const { return m_ProjfectionMatrix; }
		const glm::mat4& GetViewMatrix() const { return m_ViewMatrix; }
		const glm::mat4& GetViewProjectionMatrix() const { return m_ViewProjectionMatrix; }
	private:
		void RecalculationViewMatirx();
	private:
		glm::mat4 m_ProjfectionMatrix;
		glm::mat4 m_ViewMatrix;
		glm::mat4 m_ViewProjectionMatrix;

		glm::vec3 m_Position = {0.0f, 0.0f, 0.0f};
		float m_Rotation = 0.0f;
	};
}