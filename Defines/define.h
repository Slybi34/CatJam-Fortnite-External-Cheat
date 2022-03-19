
#define E
ImFont* m_pFont;

DWORD_PTR Uworld;
DWORD_PTR LocalPawn;
DWORD_PTR PlayerState;
DWORD_PTR Localplayer;
DWORD_PTR Rootcomp;
DWORD_PTR relativelocation;
DWORD_PTR PlayerController;
DWORD_PTR Persistentlevel;
DWORD_PTR Ulevel;

Vector3 localactorpos;
Vector3 Localcam;

uint64_t TargetPawn;
int localplayerID;

bool isaimbotting;
bool CrosshairSnapLines = false;
bool team_CrosshairSnapLines;


RECT GameRect = { NULL };
D3DPRESENT_PARAMETERS d3dpp;

DWORD ScreenCenterX;
DWORD ScreenCenterY;
DWORD ScreenCenterZ;

//static void xCreateWindow();
//static void xInitD3d();
//static void xMainLoop();
//static LRESULT CALLBACK WinProc(HWND hWnd, UINT Message, WPARAM wParam, LPARAM lParam);
//extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

static HWND Window = NULL;
//IDirect3D9Ex* p_Object = NULL;
static LPDIRECT3DDEVICE9 D3dDevice = NULL;
static LPDIRECT3DVERTEXBUFFER9 TriBuf = NULL;




DWORD Menuthread(LPVOID in) {
	while (1) {
		if (GetAsyncKeyState(VK_INSERT) & 1) {
			item.show_menu = !item.show_menu;
		}
		Sleep(2);
	}
}


static HWND get_process_wnd(uint32_t pid) {
	std::pair<HWND, uint32_t> params = { 0, pid };

	BOOL bResult = EnumWindows([](HWND hwnd, LPARAM lParam) -> BOOL {
		auto pParams = (std::pair<HWND, uint32_t>*)(lParam);
		uint32_t processId = 0;

		if (GetWindowThreadProcessId(hwnd, reinterpret_cast<LPDWORD>(&processId)) && processId == pParams->second) {
			SetLastError((uint32_t)-1);
			pParams->first = hwnd;
			return FALSE;
		}

		return TRUE;

		}, (LPARAM)&params);

	if (!bResult && GetLastError() == -1 && params.first)
		return params.first;

	return NULL;
}
ImFont* title;
ImFont* title1;
ImFont* otherfont;
ImFont* tabfont;
ImFont* othertitle;
ImFont* spritefont;