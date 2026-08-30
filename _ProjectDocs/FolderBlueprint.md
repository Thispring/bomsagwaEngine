# FolderBlueprint

> 엔진의 폴더 구조에 대한 청사진 입니다.

bomsagwaEngine/
│
├── Engine/
│   ├── Core/
│   │   ├── Engine.h/cpp           # 엔진 루프 (Init / Update / Shutdown)
│   │   ├── Application.h/cpp      # NSApplication 생명주기
│   │   ├── Timer.h/cpp            # 델타타임 계산
│   │   ├── Singleton.h
│   │   └── Global.h
│   │
│   ├── Scene/                     # GameObject / Component 시스템
│   │   ├── Scene.h/cpp            # 씬 (GameObject들을 보유)
│   │   ├── GameObject.h/cpp       # 게임 오브젝트
│   │   └── Component/
│   │       ├── Component.h        # 베이스 컴포넌트
│   │       ├── Transform.h/cpp    # 위치/회전/크기
│   │       ├── MeshRenderer.h/cpp # 렌더 컴포넌트
│   │       └── Script.h/cpp       # 유저 로직 컴포넌트
│   │
│   ├── Renderer/                  # Metal 그래픽스 파이프라인
│   │   ├── Renderer.h/cpp
│   │   ├── View.h/cpp
│   │   ├── Pipeline/              # MTLRenderPipelineState
│   │   ├── Buffer/                # Vertex / Uniform 버퍼
│   │   ├── Shader/                # .metal 파일, ShaderTypes.h
│   │   └── Texture/
│   │
│   ├── Platform/
│   │   └── macOS/
│   │       └── ObjCBridge.mm
│   │
│   └── Util/
│       ├── DataStructure/         # 기존 DataStructureLibrary
│       │   ├── TVector.h/hpp
│       │   ├── TList.h/hpp
│       │   ├── TMap.h/hpp
│       │   └── TTree.h/hpp
│       └── pch.h
│
├── Client/                        # 엔진을 사용해 실제 게임 작성
│   ├── GameScene.h/cpp            # Scene을 상속한 실제 씬
│   ├── PlayerScript.h/cpp         # Script 컴포넌트 구현체
│   └── main.cpp
│
├── Resources/
│   ├── Textures/
│   └── Models/
│
└── ThirdParty/
    ├── metal-cpp/
    └── metal-cpp-extensions/ 
    