//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/UndeclaredThrowableException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangReflectUndeclaredThrowableException")
#ifdef RESTRICT_JavaLangReflectUndeclaredThrowableException
#define INCLUDE_ALL_JavaLangReflectUndeclaredThrowableException 0
#else
#define INCLUDE_ALL_JavaLangReflectUndeclaredThrowableException 1
#endif
#undef RESTRICT_JavaLangReflectUndeclaredThrowableException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangReflectUndeclaredThrowableException_) && (INCLUDE_ALL_JavaLangReflectUndeclaredThrowableException || defined(INCLUDE_JavaLangReflectUndeclaredThrowableException))
#define JavaLangReflectUndeclaredThrowableException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "../../../java/lang/RuntimeException.h"

/*!
 @brief This class provides a wrapper for an undeclared, checked exception thrown by
 an InvocationHandler.
 - seealso: java.lang.reflect.InvocationHandler#invoke
 */
@interface JavaLangReflectUndeclaredThrowableException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a new <code>UndeclaredThrowableException</code> instance with the
 undeclared, checked exception that occurred.
 @param exception
 the undeclared, checked exception that occurred
 */
- (instancetype)initWithNSException:(NSException *)exception;

/*!
 @brief Constructs a new <code>UndeclaredThrowableException</code> instance with the
 undeclared, checked exception that occurred and a message.
 @param detailMessage
 the detail message for the exception
 @param exception
 the undeclared, checked exception that occurred
 */
- (instancetype)initWithNSException:(NSException *)exception
                       withNSString:(NSString *)detailMessage;

/*!
 @brief Returns the undeclared, checked exception that occurred, which may be
 <code>null</code>.
 @return the undeclared, checked exception that occurred
 */
- (NSException *)getCause;

/*!
 @brief Returns the undeclared, checked exception that occurred, which may be
 <code>null</code>.
 @return the undeclared, checked exception that occurred
 */
- (NSException *)getUndeclaredThrowable;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectUndeclaredThrowableException)

FOUNDATION_EXPORT void JavaLangReflectUndeclaredThrowableException_initWithNSException_(JavaLangReflectUndeclaredThrowableException *self, NSException *exception);

FOUNDATION_EXPORT JavaLangReflectUndeclaredThrowableException *new_JavaLangReflectUndeclaredThrowableException_initWithNSException_(NSException *exception) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangReflectUndeclaredThrowableException *create_JavaLangReflectUndeclaredThrowableException_initWithNSException_(NSException *exception);

FOUNDATION_EXPORT void JavaLangReflectUndeclaredThrowableException_initWithNSException_withNSString_(JavaLangReflectUndeclaredThrowableException *self, NSException *exception, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangReflectUndeclaredThrowableException *new_JavaLangReflectUndeclaredThrowableException_initWithNSException_withNSString_(NSException *exception, NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangReflectUndeclaredThrowableException *create_JavaLangReflectUndeclaredThrowableException_initWithNSException_withNSString_(NSException *exception, NSString *detailMessage);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectUndeclaredThrowableException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangReflectUndeclaredThrowableException")
