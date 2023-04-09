#pragma once

class AFX_EXT_CLASS CProductInfo
{
	static CProductInfo* m_pInstance;

protected:
	CProductInfo();

public:
	virtual ~CProductInfo();

	static CProductInfo& Instance() {
		ASSERT(m_pInstance);
		return *m_pInstance;
	}

public:
	virtual CString GetCompanyName() = 0;
	virtual CString GetProductName() = 0;
	virtual CString GetVersionName() = 0;

};