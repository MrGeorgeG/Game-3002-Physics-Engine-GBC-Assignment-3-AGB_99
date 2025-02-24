#pragma once
#include "ECSConfig.h"
#include <React3D/reactphysics3d.h>

namespace Reality
{
	struct RigidbodyComponent
	{
		RigidbodyComponent(Vector3 _velocity = Vector3(0, 0, 0), Vector3 _angularVelocity = Vector3(0, 0, 0))
			:velocity(_velocity), acceleration(Vector3(0, 0, 0)),
			angularVelocity(_angularVelocity), angularAcceleration(Vector3(0, 0, 0))
		{
			
		}
		Vector3 acceleration;
		Vector3 velocity;
		Vector3 angularAcceleration;
		Vector3 angularVelocity;
		rp3d::CollisionBody* rp3dCollisionBody;
		bool initialized = false;
	};
}
