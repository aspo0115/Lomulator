
// lomulatorView.h : ClomulatorView Ŭ������ �������̽�
//

#pragma once


class ClomulatorView : public CView
{
protected: // serialization������ ��������ϴ�.
	ClomulatorView();
	DECLARE_DYNCREATE(ClomulatorView)

// Ư���Դϴ�.
public:
	ClomulatorDoc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~ClomulatorView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // lomulatorView.cpp�� ����� ����
inline ClomulatorDoc* ClomulatorView::GetDocument() const
   { return reinterpret_cast<ClomulatorDoc*>(m_pDocument); }
#endif

