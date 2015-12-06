#include <Windows.h>
#include <wrl.h>

///WinMain
/**
* Application entry point
*/
INT WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow)
{
	HRESULT hr = S_OK;

	//Enable run-time memory check for debug
#if defined(DEBUG) | defined(_DEBUG)
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

	return hr;
}