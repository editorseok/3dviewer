#include "pch.h"
#include "ProductInfo.h"

CProductInfo* CProductInfo::m_pInstance = nullptr;

CProductInfo::CProductInfo()
{
	ASSERT(!m_pInstance);
	m_pInstance = this;
}

CProductInfo::~CProductInfo()
{
}
