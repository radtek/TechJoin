
// ToolBarDoc.cpp : implementation of the CToolBarDoc class
//

#include "stdafx.h"
#include "ToolBar.h"

#include "ToolBarDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CToolBarDoc

IMPLEMENT_DYNCREATE(CToolBarDoc, CDocument)

BEGIN_MESSAGE_MAP(CToolBarDoc, CDocument)
END_MESSAGE_MAP()


// CToolBarDoc construction/destruction

CToolBarDoc::CToolBarDoc()
{
	// TODO: add one-time construction code here

}

CToolBarDoc::~CToolBarDoc()
{
}

BOOL CToolBarDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CToolBarDoc serialization

void CToolBarDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}


// CToolBarDoc diagnostics

#ifdef _DEBUG
void CToolBarDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CToolBarDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CToolBarDoc commands
