#pragma once
#include <d3d11.h>
#include <Mouse.h>
#include <SimpleMath.h>
#include "StepTimer.h"
#include "InputCommands.h"

class Camera
{
public:
	Camera();
	~Camera();

	void TickCamera(DX::StepTimer const& timer, InputCommands input);

	DirectX::SimpleMath::Matrix GetLookAt();
	DirectX::SimpleMath::Vector3 GetPosition();

private:
	DirectX::SimpleMath::Vector3 m_camPosition;
	DirectX::SimpleMath::Vector3 m_camOrientation;
	DirectX::SimpleMath::Vector3 m_camLookAt;
	DirectX::SimpleMath::Vector3 m_camLookDirection;
	DirectX::SimpleMath::Vector3 m_camRight;
	float m_movespeed;
	float m_camRotRate;
};

