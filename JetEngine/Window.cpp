#include "Window.h"
#include <Windows.h>

Window::Window() {

}

bool Window::init() {
	WNDCLASSEX wc;
	wc.cbClsExtra = NULL;
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.cbWndExtra = NULL;
	wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	wc.hInstance = NULL;
	wc.lpszClassName = "JetWin";
	wc.lpszMenuName = "";
	wc.style = NULL;


	if (!::RegisterClassEx(&wc)) // If class registration fails, lets stop
		return false;

	::CreateWindowEx(WS_EX_OVERLAPPEDWINDOW, "JetWin", "JetEngine Window", WS_OVERLAPPED, CW_USEDEFAULT, CW_USEDEFAULT, 1024, 768, NULL, NULL, NULL, NULL);

	return true;
}

bool Window::release() {

	return true;
}

Window::~Window() {

}
