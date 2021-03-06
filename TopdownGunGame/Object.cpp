#include "DXUT.h"
#include "Object.h"
#include "Component.h"


Object::Object()
{
	AddComponent<Transform>();
	transform = GetComponent<Transform>();
	transform->Init();
}


Object::~Object()
{
	for (auto iter : components)
	{
		SAFE_DELETE(iter.second);
	}
	components.clear();
}
