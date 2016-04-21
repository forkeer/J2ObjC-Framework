//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/DatagramSocketImplFactory.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetDatagramSocketImplFactory")
#ifdef RESTRICT_JavaNetDatagramSocketImplFactory
#define INCLUDE_ALL_JavaNetDatagramSocketImplFactory 0
#else
#define INCLUDE_ALL_JavaNetDatagramSocketImplFactory 1
#endif
#undef RESTRICT_JavaNetDatagramSocketImplFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetDatagramSocketImplFactory_) && (INCLUDE_ALL_JavaNetDatagramSocketImplFactory || defined(INCLUDE_JavaNetDatagramSocketImplFactory))
#define JavaNetDatagramSocketImplFactory_

@class JavaNetDatagramSocketImpl;

/*!
 @brief This interface defines a factory for datagram socket implementations.
 It is
 used by the class <code>DatagramSocket</code> to create a new datagram socket
 implementation.
 - seealso: DatagramSocket
 */
@protocol JavaNetDatagramSocketImplFactory < NSObject, JavaObject >

/*!
 @brief Creates a new <code>DatagramSocketImpl</code> instance.
 @return the new datagram socket implementation.
 */
- (JavaNetDatagramSocketImpl *)createDatagramSocketImpl;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetDatagramSocketImplFactory)

J2OBJC_TYPE_LITERAL_HEADER(JavaNetDatagramSocketImplFactory)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetDatagramSocketImplFactory")
