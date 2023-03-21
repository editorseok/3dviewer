#pragma once

#ifndef VER_DEF
#define VER_DEF

#define TO_STR(str) #str
#define TO_STR_VER(major, minor, patch, build) TO_STR(major.minor.patch.build)

#define VER_MAJOR 1
#define VER_MINOR 0
#define VER_PATCH 0
#define VER_BUILD 0

#define COMPANY			TO_STR(HEESEOK JEONG)
#define PRODUCT			TO_STR(3D VIEWER)
#define FILE_VER		TO_STR_VER(VER_MAJOR, VER_MINOR, VER_PATCH, VER_BUILD)
#define COPYRIGHT		TO_STR((c) HEESEOK JEONG.  All rights reserved.)

#endif // !VER_DEF

