
// shuanmushijueMFC.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CshuanmushijueMFCApp: 
// �йش����ʵ�֣������ shuanmushijueMFC.cpp
//

class CshuanmushijueMFCApp : public CWinApp
{
public:
	CshuanmushijueMFCApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CshuanmushijueMFCApp theApp;