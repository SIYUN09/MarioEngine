#include "MarioEndScene.h"
#include "MarioGameObject.h"
#include "MarioPlayer.h"
#include "MarioTransform.h"
#include "MarioSpriteRenderer.h"
#include "MarioInput.h"
#include "MarioTitleScene.h"
#include "MarioSceneManager.h"
#include "MarioObject.h"
#include "MarioTexture.h"
#include "MarioResources.h"
#include "MarioPlayerScript.h"
#include "MarioCamera.h"
#include "MarioRenderer.h"

namespace Mario
{
	EndScene::EndScene()
	{
	}
	EndScene::~EndScene()
	{
	}
	void EndScene::Initialize()
	{
		// main camera
		GameObject* camera = object::Instantiate<GameObject>(enums::eLayerType::None, Vector2(393.0f, 388.0f));
		Camera* cameraComp = camera->AddComponent<Camera>();
		renderer::mainCamera = cameraComp;
		//camera->AddComponent<PlayerScript>();


		//게임오브젝트 만들기전에 리소스들 전부 Load해두면 좋다.
		//bg = object::Instantiate<Player>
		//	(enums::eLayerType::BackGround/*, Vector2(100.0f, 100.0f)*/);
		//SpriteRenderer* sr = bg->AddComponent<SpriteRenderer>();

		//graphcis::Texture* bg = Resources::Find<graphcis::Texture>(L"BG");
		//sr->SetTexture(bg);

		bg = object::Instantiate<GameObject>
			(enums::eLayerType::Ending/*, Vector2(-500.0f, -500.0f)*/);
		SpriteRenderer* sr = bg->AddComponent<SpriteRenderer>();
		sr->SetSize(Vector2(3.01f, 3.1f));
		

		graphcis::Texture* ed = Resources::Find<graphcis::Texture>(L"ED");
		sr->SetTexture(ed);
		

		// 게임 오브젝트 생성후에 레이어와 게임오브젝트들의 init함수를 호출
		Scene::Initialize();
	}

	void EndScene::Update()
	{
		Scene::Update();
	}
	void EndScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void EndScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}
	void EndScene::OnEnter()
	{
	}
	void EndScene::OnExit()
	{
		//Transform* tr = bg->GetComponent<Transform>();
		//tr->SetPosition(Vector2(0, 0));
	}
}