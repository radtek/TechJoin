
// Exp1View.h : CExp1View ��Ľӿ�
//


#pragma once


class CExp1View : public CView
{
protected: // �������л�����
	CExp1View();
	DECLARE_DYNCREATE(CExp1View)

// ����
public:
	CExp1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CExp1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Exp1View.cpp �еĵ��԰汾
inline CExp1Doc* CExp1View::GetDocument() const
   { return reinterpret_cast<CExp1Doc*>(m_pDocument); }
#endif
