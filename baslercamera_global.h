#ifndef BASLERCAMERA_GLOBAL_H
#define BASLERCAMERA_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BASLERCAMERA_LIBRARY)
#  define BASLERCAMERASHARED_EXPORT Q_DECL_EXPORT
#else
#  define BASLERCAMERASHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // BASLERCAMERA_GLOBAL_H
