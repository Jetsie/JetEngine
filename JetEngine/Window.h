#pragma once

class Window
{
public:
	Window();
	// Initialize the window
	bool init();
	// Releases the window
	bool release();
	~Window();
private: 
	HWND m_hwnd;
};

