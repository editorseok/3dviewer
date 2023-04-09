#pragma once

#ifndef PROD_DEF
#define PROD_DEF

enum class ProductID
{
	kUnknown = 0x00,
	kEditor,

	// TODO. Add data here

	kNum // Maximum number of product
};

#define TO_STR(str) #str
#define TO_STR_VER(major, minor, patch, build) TO_STR(major.minor.patch.build)

#define VER_MAJOR 1
#define VER_MINOR 0
#define VER_PATCH 0
#define VER_BUILD 0

#define COMPANY						TO_STR(HEESEOK)
#define PRODUCT						TO_STR(3D VIEWER)
#define FILE_VER					TO_STR_VER(VER_MAJOR, VER_MINOR, VER_PATCH, VER_BUILD)
#define COPYRIGHT					TO_STR((c) HEESEOK.  All rights reserved.)

#define PRODUCT_FILTER				_T("")
#define PRODUCT_EXT					_T("")


#endif // !PROD_DEF
