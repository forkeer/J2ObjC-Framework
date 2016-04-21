//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/DeflaterOutputStream.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilZipDeflaterOutputStream")
#ifdef RESTRICT_JavaUtilZipDeflaterOutputStream
#define INCLUDE_ALL_JavaUtilZipDeflaterOutputStream 0
#else
#define INCLUDE_ALL_JavaUtilZipDeflaterOutputStream 1
#endif
#undef RESTRICT_JavaUtilZipDeflaterOutputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilZipDeflaterOutputStream_) && (INCLUDE_ALL_JavaUtilZipDeflaterOutputStream || defined(INCLUDE_JavaUtilZipDeflaterOutputStream))
#define JavaUtilZipDeflaterOutputStream_

#define RESTRICT_JavaIoFilterOutputStream 1
#define INCLUDE_JavaIoFilterOutputStream 1
#include "../../../java/io/FilterOutputStream.h"

@class IOSByteArray;
@class JavaIoOutputStream;
@class JavaUtilZipDeflater;

/*!
 @brief This class provides an implementation of <code>FilterOutputStream</code> that
 compresses data using the <i>DEFLATE</i> algorithm.
 Basically it wraps the
 <code>Deflater</code> class and takes care of the buffering.
 - seealso: Deflater
 */
@interface JavaUtilZipDeflaterOutputStream : JavaIoFilterOutputStream {
 @public
  /*!
   @brief The buffer for the data to be written to.
   */
  IOSByteArray *buf_;
  /*!
   @brief The deflater used.
   */
  JavaUtilZipDeflater *def_;
  jboolean done_;
}

+ (jint)BUF_SIZE;

#pragma mark Public

/*!
 @brief Constructs a new instance with a default-constructed <code>Deflater</code>.
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os;

/*!
 @brief Constructs a new instance with the given flushing behavior (see <code>flush</code>).
 @since 1.7
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os
                               withBoolean:(jboolean)syncFlush;

/*!
 @brief Constructs a new instance with the given <code>Deflater</code>.
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os
                   withJavaUtilZipDeflater:(JavaUtilZipDeflater *)def;

/*!
 @brief Constructs a new instance with the given <code>Deflater</code> and
 flushing behavior (see <code>flush</code>).
 @since 1.7
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os
                   withJavaUtilZipDeflater:(JavaUtilZipDeflater *)def
                               withBoolean:(jboolean)syncFlush;

/*!
 @brief Constructs a new instance with the given <code>Deflater</code> and buffer size.
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os
                   withJavaUtilZipDeflater:(JavaUtilZipDeflater *)def
                                   withInt:(jint)bufferSize;

/*!
 @brief Constructs a new instance with the given <code>Deflater</code>, buffer size, and
 flushing behavior (see <code>flush</code>).
 @since 1.7
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os
                   withJavaUtilZipDeflater:(JavaUtilZipDeflater *)def
                                   withInt:(jint)bufferSize
                               withBoolean:(jboolean)syncFlush;

/*!
 @brief Writes any unwritten compressed data to the underlying stream, the closes
 all underlying streams.
 This stream can no longer be used after close()
 has been called.
 @throws IOException
 If an error occurs while closing the data compression
 process.
 */
- (void)close;

/*!
 @brief Writes any unwritten data to the underlying stream.
 Does not close the
 stream.
 @throws IOException
 If an error occurs.
 */
- (void)finish;

/*!
 @brief Flushes the underlying stream.
 This flushes only the bytes that can be
 compressed at the highest level.
 <p>For deflater output streams constructed with the <code>syncFlush</code> parameter set to true,
 this first flushes all outstanding data so that it may be immediately read by its recipient.
 Doing so may degrade compression but improve interactive behavior.
 */
- (void)flush;

/*!
 @brief Compresses <code>byteCount</code> bytes of data from <code>buf</code> starting at
 <code>offset</code> and writes it to the underlying stream.
 @throws IOException
 If an error occurs during writing.
 */
- (void)writeWithByteArray:(IOSByteArray *)buffer
                   withInt:(jint)offset
                   withInt:(jint)byteCount;

- (void)writeWithInt:(jint)i;

#pragma mark Protected

/*!
 @brief Compress the data in the input buffer and write it to the underlying
 stream.
 @throws IOException
 If an error occurs during deflation.
 */
- (void)deflate;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipDeflaterOutputStream)

J2OBJC_FIELD_SETTER(JavaUtilZipDeflaterOutputStream, buf_, IOSByteArray *)
J2OBJC_FIELD_SETTER(JavaUtilZipDeflaterOutputStream, def_, JavaUtilZipDeflater *)

inline jint JavaUtilZipDeflaterOutputStream_get_BUF_SIZE();
#define JavaUtilZipDeflaterOutputStream_BUF_SIZE 512
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipDeflaterOutputStream, BUF_SIZE, jint)

FOUNDATION_EXPORT void JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_(JavaUtilZipDeflaterOutputStream *self, JavaIoOutputStream *os);

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *new_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *os) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *create_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *os);

FOUNDATION_EXPORT void JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_(JavaUtilZipDeflaterOutputStream *self, JavaIoOutputStream *os, JavaUtilZipDeflater *def);

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *new_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_(JavaIoOutputStream *os, JavaUtilZipDeflater *def) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *create_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_(JavaIoOutputStream *os, JavaUtilZipDeflater *def);

FOUNDATION_EXPORT void JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_withInt_(JavaUtilZipDeflaterOutputStream *self, JavaIoOutputStream *os, JavaUtilZipDeflater *def, jint bufferSize);

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *new_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_withInt_(JavaIoOutputStream *os, JavaUtilZipDeflater *def, jint bufferSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *create_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_withInt_(JavaIoOutputStream *os, JavaUtilZipDeflater *def, jint bufferSize);

FOUNDATION_EXPORT void JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withBoolean_(JavaUtilZipDeflaterOutputStream *self, JavaIoOutputStream *os, jboolean syncFlush);

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *new_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withBoolean_(JavaIoOutputStream *os, jboolean syncFlush) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *create_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withBoolean_(JavaIoOutputStream *os, jboolean syncFlush);

FOUNDATION_EXPORT void JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_withBoolean_(JavaUtilZipDeflaterOutputStream *self, JavaIoOutputStream *os, JavaUtilZipDeflater *def, jboolean syncFlush);

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *new_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_withBoolean_(JavaIoOutputStream *os, JavaUtilZipDeflater *def, jboolean syncFlush) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *create_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_withBoolean_(JavaIoOutputStream *os, JavaUtilZipDeflater *def, jboolean syncFlush);

FOUNDATION_EXPORT void JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_withInt_withBoolean_(JavaUtilZipDeflaterOutputStream *self, JavaIoOutputStream *os, JavaUtilZipDeflater *def, jint bufferSize, jboolean syncFlush);

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *new_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_withInt_withBoolean_(JavaIoOutputStream *os, JavaUtilZipDeflater *def, jint bufferSize, jboolean syncFlush) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *create_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_withInt_withBoolean_(JavaIoOutputStream *os, JavaUtilZipDeflater *def, jint bufferSize, jboolean syncFlush);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipDeflaterOutputStream)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilZipDeflaterOutputStream")
