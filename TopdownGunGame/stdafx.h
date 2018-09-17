// stdafx.h : ���� ��������� ���� ��������� �ʴ�
// ǥ�� �ý��� ���� ���� �Ǵ� ������Ʈ ���� ���� ������
// ��� �ִ� ���� �����Դϴ�.
//

#pragma once


#include "targetver.h"

#define WIN32_LEAN_AND_MEAN
// Windows ��� ����:

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720

#define MAX_SIZE_DIVISION -720
// C, C++

using namespace std;

////Dx
//#include <d3d9.h>
//#include <d3dx9.h>
//
//#pragma comment(lib, "./x86/d3d9.lib")
//#pragma comment(lib, "./x86/d3dx9.lib")
//
//#include "DXUT.h"
//FrameWork
#include "SingleTon.h"
#include "Transform.h"
#include "Object.h"
#include "Component.h"
#include "DataManager.h"
#include "TexVertexRenderer.h"
#include "cCamera.h"
#include "Boxcollider2d.h"
#include "Rigidbody.h"
//#include "RenderingManager.h"
#include "ObjectManager.h"
#include "SpriteRenderer.h"
#include "InputManager.h"
#include "cTime.h"
#include "SoundManager.h"
#include "TextManager.h"
#include "BaseScene.h"
#include "cSceneManager.h"

//custom
#include "Character.h"
#include "Bullet.h"
#include "Camera01.h"
#include "Tile.h"
#include "CMaps.h"
#include "MapManager.h"

#include "MainProc.h"
#include "MainScene.h"

extern LPD3DXSPRITE lp_sprite;
#define DXUThWnd DXUTGetHWND()
#define DEVICE DXUTGetD3D9Device()
