# Git Commit에서 자주 사용하는 동사

Git 커밋 메시지에서 자주 사용하는 동사와 의미를 정리한 문서입니다.

## 1. 기본 동사

| 동사 | 의미 | 사용 예시 |
|---|---|---|
| `Add` | 추가 | `Add player camera` |
| `Implement` | 구현 | `Implement session search` |
| `Update` | 업데이트 / 변경 | `Update player movement` |
| `Fix` | 버그 수정 | `Fix camera collision` |
| `Remove` | 제거 | `Remove unused component` |
| `Refactor` | 리팩토링 | `Refactor camera controller` |
| `Improve` | 개선 | `Improve camera behavior` |
| `Optimize` | 최적화 | `Optimize collision detection` |
| `Rename` | 이름 변경 | `Rename camera component` |
| `Move` | 이동 | `Move camera logic to component` |
| `Merge` | 병합 | `Merge feature branch` |

## 2. 동사별 사용 기준

### Add

새로운 파일, 클래스, 기능, 에셋 등을 추가할 때 사용합니다.

```text
Add player camera
Add session manager
Add round result UI
```

### Implement

새로운 기능이나 시스템을 **실제로 구현**했음을 강조할 때 사용합니다.

```text
Implement player sprint
Implement session search
Implement round result system
```

`Add`보다 구현 작업의 성격이 강합니다.

### Update

기존 기능이나 설정, 문서 등을 변경하거나 업데이트할 때 사용합니다.

```text
Update player movement
Update README
Update project settings
```

### Fix

버그나 잘못된 동작을 수정했을 때 사용합니다.

```text
Fix camera rotation
Fix session joining
Fix incorrect round count
```

### Remove

불필요한 코드, 기능, 파일, 에셋 등을 제거할 때 사용합니다.

```text
Remove unused component
Remove deprecated function
Remove unused assets
```

### Refactor

기능의 동작은 유지하면서 코드 구조를 개선할 때 사용합니다.

```text
Refactor camera controller
Refactor player movement logic
Refactor session management
```

### Improve

기존 기능의 품질이나 사용성을 전반적으로 개선했을 때 사용합니다.

```text
Improve camera behavior
Improve lobby UI
Improve player movement
```

### Optimize

성능을 개선할 때 사용합니다.

```text
Optimize collision detection
Optimize camera update
Optimize asset loading
```

### Rename

변수, 함수, 클래스, 파일 등의 이름을 변경할 때 사용합니다.

```text
Rename camera component
Rename player state variable
Rename session widget
```

### Move

코드나 파일, 기능을 다른 위치로 이동할 때 사용합니다.

```text
Move camera logic to component
Move UI widget to lobby folder
Move player settings to data asset
```

### Merge

브랜치를 병합할 때 사용합니다.

```text
Merge feature branch
Merge develop into feature/camera
```

## 3. 상황별 추천

| 작업 내용 | 추천 동사 |
|---|---|
| 새로운 기능 추가 | `Add` / `Implement` |
| 기존 기능 변경 | `Update` |
| 버그 수정 | `Fix` |
| 코드 구조 개선 | `Refactor` |
| 기능 품질 개선 | `Improve` |
| 성능 개선 | `Optimize` |
| 코드/파일 삭제 | `Remove` |
| 이름 변경 | `Rename` |
| 코드/파일 위치 변경 | `Move` |
| 브랜치 병합 | `Merge` |

## 4. 게임 개발 프로젝트에서 자주 사용할 조합

Unreal Engine 게임 프로젝트에서는 다음과 같은 형태를 자주 사용할 수 있습니다.

```text
Add Player Camera Controller
Implement Session Browser
Update Round Result UI
Fix Player Camera Rotation
Refactor Camera Controller
Improve Lobby UI
Optimize Collision Detection
Remove Unused Component
Rename Camera Component
Move Camera Logic to Component
```

## 5. Commit Message 작성 시 참고

가능하면 커밋 메시지는 **무엇을 변경했는지 한눈에 알 수 있도록** 작성합니다.

권장:

```text
Add player sprint
Fix camera rotation
Refactor camera controller
Optimize collision detection
```

피하는 것이 좋은 예:

```text
Update
Fix bug
Change code
Work
Modified
```

너무 포괄적인 표현보다는 변경 대상과 내용을 함께 작성하는 것이 좋습니다.

---

## 추천 기본 세트

개인 게임 프로젝트에서는 아래 동사만 주로 사용해도 충분합니다.

```text
Add
Implement
Update
Fix
Remove
Refactor
Improve
Optimize
Rename
Move
```
