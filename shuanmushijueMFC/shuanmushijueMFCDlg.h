
// shuanmushijueMFCDlg.h : ͷ�ļ�
//
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include "Camera.h"
#include "C:\Users\DELL-PC\Documents\Visual Studio 2013\Projects\shuanmushijueMFC\include\opencv2\videoio.hpp"
using namespace cv;
#pragma once


// CshuanmushijueMFCDlg �Ի���
class CshuanmushijueMFCDlg : public CDialogEx
{
// ����
public:
	CshuanmushijueMFCDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_SHUANMUSHIJUEMFC_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	VideoCapture cap1;
	VideoCapture cap2;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedCancel();
};
