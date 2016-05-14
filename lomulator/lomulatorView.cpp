
// lomulatorView.cpp : ClomulatorView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "lomulator.h"
#endif

#include "lomulatorDoc.h"
#include "lomulatorView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ClomulatorView

IMPLEMENT_DYNCREATE(ClomulatorView, CView)

BEGIN_MESSAGE_MAP(ClomulatorView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// ClomulatorView ����/�Ҹ�

ClomulatorView::ClomulatorView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

ClomulatorView::~ClomulatorView()
{
}

BOOL ClomulatorView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// ClomulatorView �׸���

void ClomulatorView::OnDraw(CDC* /*pDC*/)
{
	ClomulatorDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// ClomulatorView �μ�

BOOL ClomulatorView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void ClomulatorView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void ClomulatorView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// ClomulatorView ����

#ifdef _DEBUG
void ClomulatorView::AssertValid() const
{
	CView::AssertValid();
}

void ClomulatorView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

ClomulatorDoc* ClomulatorView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(ClomulatorDoc)));
	return (ClomulatorDoc*)m_pDocument;
}
#endif //_DEBUG


// ClomulatorView �޽��� ó����
