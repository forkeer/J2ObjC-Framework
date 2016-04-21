//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/RuntimeException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangRuntimeException")
#ifdef RESTRICT_JavaLangRuntimeException
#define INCLUDE_ALL_JavaLangRuntimeException 0
#else
#define INCLUDE_ALL_JavaLangRuntimeException 1
#endif
#undef RESTRICT_JavaLangRuntimeException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangRuntimeException_) && (INCLUDE_ALL_JavaLangRuntimeException || defined(INCLUDE_JavaLangRuntimeException))
#define JavaLangRuntimeException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "../../java/lang/Exception.h"

/*!
 @brief <code>RuntimeException</code> is the superclass of all classes that represent
 exceptional conditions which occur as a result of executing an application in
 the VM.
 Unlike checked exceptions (exceptions where the type
 doesn't extend <code>RuntimeException</code> or <code>Error</code>), the compiler does
 not require code to handle runtime exceptions.
 */
@interface JavaLangRuntimeException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs a new <code>RuntimeException</code> that includes the current stack
 trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>RuntimeException</code> with the current stack trace
 and the specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

/*!
 @brief Constructs a new <code>RuntimeException</code> with the current stack trace,
 the specified detail message and the specified cause.
 @param detailMessage
 the detail message for this exception.
 @param throwable
 the cause of this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage
                 withNSException:(NSException *)throwable;

/*!
 @brief Constructs a new <code>RuntimeException</code> with the current stack trace
 and the specified cause.
 @param throwable
 the cause of this exception.
 */
- (instancetype)initWithNSException:(NSException *)throwable;

#pragma mark Protected

/*!
 @brief Constructs a new <code>RuntimeException</code> with the current stack trace,
 the specified detail message, the specified cause, and whether suppression
 and/or writable stack trace is enabled.
 @since 1.7
 */
- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)cause
                     withBoolean:(jboolean)enableSuppression
                     withBoolean:(jboolean)writableStackTrace;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangRuntimeException)

FOUNDATION_EXPORT void JavaLangRuntimeException_init(JavaLangRuntimeException *self);

FOUNDATION_EXPORT JavaLangRuntimeException *new_JavaLangRuntimeException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangRuntimeException *create_JavaLangRuntimeException_init();

FOUNDATION_EXPORT void JavaLangRuntimeException_initWithNSString_(JavaLangRuntimeException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangRuntimeException *new_JavaLangRuntimeException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangRuntimeException *create_JavaLangRuntimeException_initWithNSString_(NSString *detailMessage);

FOUNDATION_EXPORT void JavaLangRuntimeException_initWithNSString_withNSException_(JavaLangRuntimeException *self, NSString *detailMessage, NSException *throwable);

FOUNDATION_EXPORT JavaLangRuntimeException *new_JavaLangRuntimeException_initWithNSString_withNSException_(NSString *detailMessage, NSException *throwable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangRuntimeException *create_JavaLangRuntimeException_initWithNSString_withNSException_(NSString *detailMessage, NSException *throwable);

FOUNDATION_EXPORT void JavaLangRuntimeException_initWithNSException_(JavaLangRuntimeException *self, NSException *throwable);

FOUNDATION_EXPORT JavaLangRuntimeException *new_JavaLangRuntimeException_initWithNSException_(NSException *throwable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangRuntimeException *create_JavaLangRuntimeException_initWithNSException_(NSException *throwable);

FOUNDATION_EXPORT void JavaLangRuntimeException_initWithNSString_withNSException_withBoolean_withBoolean_(JavaLangRuntimeException *self, NSString *message, NSException *cause, jboolean enableSuppression, jboolean writableStackTrace);

FOUNDATION_EXPORT JavaLangRuntimeException *new_JavaLangRuntimeException_initWithNSString_withNSException_withBoolean_withBoolean_(NSString *message, NSException *cause, jboolean enableSuppression, jboolean writableStackTrace) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangRuntimeException *create_JavaLangRuntimeException_initWithNSString_withNSException_withBoolean_withBoolean_(NSString *message, NSException *cause, jboolean enableSuppression, jboolean writableStackTrace);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangRuntimeException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangRuntimeException")
