
// glgenome.h�: fichier d'en-t�te principal pour l'application PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluez 'stdafx.h' avant d'inclure ce fichier pour PCH"
#endif

#include "resource.h"		// symboles principaux


// CglgenomeApp�:
// Consultez glgenome.cpp pour l'impl�mentation de cette classe
//

class CglgenomeApp : public CWinApp
{
public:
	CglgenomeApp();

// Substitutions
public:
	virtual BOOL InitInstance();

// Impl�mentation

	DECLARE_MESSAGE_MAP()
};

extern CglgenomeApp theApp;