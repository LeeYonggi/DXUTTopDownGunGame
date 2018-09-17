#include "DXUT.h"
#include "MainProc.h"
#include "DXUT.h"


void MainProc::Init()
{
	OBJECTMANAGER->Init();
	windowAct = true;
	SCENEMANAGER->AddScene(new MainScene);
}

void MainProc::Update()
{
	SOUNDMANAGER->Update();
	OBJECTMANAGER->Update();
	SCENEMANAGER->Update();
	INPUTMANAGER->Update();
}

void MainProc::Render()
{
	OBJECTMANAGER->Render();
	SCENEMANAGER->Render();
}

void MainProc::Release()
{
	OBJECTMANAGER->ReleaseSingleton();
	//manager delete
	SCENEMANAGER->ReleaseSingleton();
	DATAMANAGER->ReleaseSingleton();
	TIMEMANAGER->ReleaseSingleton();
	INPUTMANAGER->ReleaseSingleton();
	SOUNDMANAGER->ReleaseSingleton();

	lp_sprite->Release();
	lp_sprite->OnLostDevice();
}

MainProc::MainProc()
{
}


MainProc::~MainProc()
{
}
