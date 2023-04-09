#include "pch.h"
#include "ProductInfoImpl.h"
#include "Product.h"

CProductInfoImpl _g_instance;
CProductInfoImpl::CProductInfoImpl()
{
}

CProductInfoImpl::~CProductInfoImpl()
{
}

CString CProductInfoImpl::GetCompanyName()
{
	return _T(COMPANY);
}

CString CProductInfoImpl::GetProductName()
{
	return _T(PRODUCT);
}
