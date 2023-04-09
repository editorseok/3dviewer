#pragma once

#include "../APP_BASE/ProductInfo.h"

class CProductInfoImpl : public CProductInfo
{
public:
	CProductInfoImpl();
	virtual ~CProductInfoImpl();

public:
	virtual CString GetCompanyName() override;
	virtual CString GetProductName() override;

};