// vfwcaptureView.h : CvfwcaptureView 类的接口
//




#pragma once
#include <vfw.h>

class CvfwcaptureView : public CView
{
protected: // 仅从序列化创建
	CvfwcaptureView();
	DECLARE_DYNCREATE(CvfwcaptureView)

// 属性
public:
	CvfwcaptureDoc* GetDocument() const;

// 操作
public:
	//
	HDRAWDIB m_hdd;
	//~

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CvfwcaptureView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // vfwcaptureView.cpp 中的调试版本
inline CvfwcaptureDoc* CvfwcaptureView::GetDocument() const
   { return reinterpret_cast<CvfwcaptureDoc*>(m_pDocument); }
#endif

