
// lomulator.h : lomulator ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// ClomulatorApp:
// �� Ŭ������ ������ ���ؼ��� lomulator.cpp�� �����Ͻʽÿ�.
//

class ClomulatorApp : public CWinApp
{
public:
	ClomulatorApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	UINT  m_nAppLook;
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern ClomulatorApp theApp;
