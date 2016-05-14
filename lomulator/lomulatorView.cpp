
// lomulatorView.cpp : ClomulatorView 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
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
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// ClomulatorView 생성/소멸

ClomulatorView::ClomulatorView()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

ClomulatorView::~ClomulatorView()
{
}

BOOL ClomulatorView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// ClomulatorView 그리기

void ClomulatorView::OnDraw(CDC* /*pDC*/)
{
	ClomulatorDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// ClomulatorView 인쇄

BOOL ClomulatorView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void ClomulatorView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void ClomulatorView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// ClomulatorView 진단

#ifdef _DEBUG
void ClomulatorView::AssertValid() const
{
	CView::AssertValid();
}

void ClomulatorView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

ClomulatorDoc* ClomulatorView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(ClomulatorDoc)));
	return (ClomulatorDoc*)m_pDocument;
}
#endif //_DEBUG


// ClomulatorView 메시지 처리기
