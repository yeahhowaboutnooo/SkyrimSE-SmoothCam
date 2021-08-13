#pragma once

namespace Physics {
	// Get the spatial partitioning structure used by the collision engine of havok
	hkp3AxisSweep* GetBroadphase(bhkWorld* physicsWorld) noexcept;
	// Get the physics world for the given cell
	bhkWorld* GetWorld(const TESObjectCELL* parentCell) noexcept;
	// Get the gravity vector for the current world space using `ref`
	glm::vec3 GetGravityVector(const TESObjectREFR* ref) noexcept;
}