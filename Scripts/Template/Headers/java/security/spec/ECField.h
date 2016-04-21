//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/ECField.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecECField")
#ifdef RESTRICT_JavaSecuritySpecECField
#define INCLUDE_ALL_JavaSecuritySpecECField 0
#else
#define INCLUDE_ALL_JavaSecuritySpecECField 1
#endif
#undef RESTRICT_JavaSecuritySpecECField

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecuritySpecECField_) && (INCLUDE_ALL_JavaSecuritySpecECField || defined(INCLUDE_JavaSecuritySpecECField))
#define JavaSecuritySpecECField_

/*!
 @brief The base interface for a Finite Field of an Elliptic Curve.
 */
@protocol JavaSecuritySpecECField < NSObject, JavaObject >

/*!
 @brief Returns the size of the field (in bits).
 @return the size of the field (in bits).
 */
- (jint)getFieldSize;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecECField)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecECField)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecECField")
