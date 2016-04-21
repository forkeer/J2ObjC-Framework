//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/InputStreamReader.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoInputStreamReader")
#ifdef RESTRICT_JavaIoInputStreamReader
#define INCLUDE_ALL_JavaIoInputStreamReader 0
#else
#define INCLUDE_ALL_JavaIoInputStreamReader 1
#endif
#undef RESTRICT_JavaIoInputStreamReader

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoInputStreamReader_) && (INCLUDE_ALL_JavaIoInputStreamReader || defined(INCLUDE_JavaIoInputStreamReader))
#define JavaIoInputStreamReader_

#define RESTRICT_JavaIoReader 1
#define INCLUDE_JavaIoReader 1
#include "../../java/io/Reader.h"

@class IOSCharArray;
@class JavaIoInputStream;
@class JavaNioCharsetCharset;
@class JavaNioCharsetCharsetDecoder;

/*!
 @brief A class for turning a byte stream into a character stream.
 Data read from the
 source input stream is converted into characters by either a default or a
 provided character converter. The default encoding is taken from the
 "file.encoding" system property. <code>InputStreamReader</code> contains a buffer
 of bytes read from the source stream and converts these into characters as
 needed. The buffer size is 8K.
 - seealso: OutputStreamWriter
 */
@interface JavaIoInputStreamReader : JavaIoReader

#pragma mark Public

/*!
 @brief Constructs a new <code>InputStreamReader</code> on the <code>InputStream</code>
 <code>in</code>.
 This constructor sets the character converter to the encoding
 specified in the "file.encoding" property and falls back to ISO 8859_1
 (ISO-Latin-1) if the property doesn't exist.
 @param inArg
 the input stream from which to read characters.
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

/*!
 @brief Constructs a new InputStreamReader on the InputStream <code>in</code> and
 Charset <code>charset</code>.
 @param inArg
 the source InputStream from which to read characters.
 @param charset
 the Charset that defines the character converter
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

/*!
 @brief Constructs a new InputStreamReader on the InputStream <code>in</code> and
 CharsetDecoder <code>dec</code>.
 @param inArg
 the source InputStream from which to read characters.
 @param dec
 the CharsetDecoder used by the character conversion.
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
         withJavaNioCharsetCharsetDecoder:(JavaNioCharsetCharsetDecoder *)dec;

/*!
 @brief Constructs a new InputStreamReader on the InputStream <code>in</code>.
 The
 character converter that is used to decode bytes into characters is
 identified by name by <code>charsetName</code>. If the encoding cannot be found, an
 UnsupportedEncodingException error is thrown.
 @param inArg
 the InputStream from which to read characters.
 @param charsetName
 identifies the character converter to use.
 @throws NullPointerException
 if <code>charsetName</code> is <code>null</code>.
 @throws UnsupportedEncodingException
 if the encoding specified by <code>charsetName</code> cannot be found.
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                             withNSString:(NSString *)charsetName;

/*!
 @brief Closes this reader.
 This implementation closes the source InputStream and
 releases all local storage.
 @throws IOException
 if an error occurs attempting to close this reader.
 */
- (void)close;

/*!
 @brief Returns the canonical name of the encoding used by this writer to convert characters to
 bytes, or null if this writer has been closed.
 Most callers should probably keep
 track of the String or Charset they passed in; this method may not return the same
 name.
 */
- (NSString *)getEncoding;

/*!
 @brief Reads a single character from this reader and returns it as an integer
 with the two higher-order bytes set to 0.
 Returns -1 if the end of the
 reader has been reached. The byte value is either obtained from
 converting bytes in this reader's buffer or by first filling the buffer
 from the source InputStream and then reading from the buffer.
 @return the character read or -1 if the end of the reader has been
 reached.
 @throws IOException
 if this reader is closed or some other I/O error occurs.
 */
- (jint)read;

/*!
 @brief Reads up to <code>count</code> characters from this reader and stores them
 at position <code>offset</code> in the character array <code>buffer</code>.
 Returns
 the number of characters actually read or -1 if the end of the reader has
 been reached. The bytes are either obtained from converting bytes in this
 reader's buffer or by first filling the buffer from the source
 InputStream and then reading from the buffer.
 @throws IndexOutOfBoundsException
 if <code>offset < 0 || count < 0 || offset + count > buffer.length</code>.
 @throws IOException
 if this reader is closed or some other I/O error occurs.
 */
- (jint)readWithCharArray:(IOSCharArray *)buffer
                  withInt:(jint)offset
                  withInt:(jint)count;

/*!
 @brief Indicates whether this reader is ready to be read without blocking.
 If
 the result is <code>true</code>, the next <code>read()</code> will not block. If
 the result is <code>false</code> then this reader may or may not block when
 <code>read()</code> is called. This implementation returns <code>true</code> if
 there are bytes available in the buffer or the source stream has bytes
 available.
 @return <code>true</code> if the receiver will not block when <code>read()</code>
 is called, <code>false</code> if unknown or blocking will occur.
 @throws IOException
 if this reader is closed or some other I/O error occurs.
 */
- (jboolean)ready;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoInputStreamReader)

FOUNDATION_EXPORT void JavaIoInputStreamReader_initWithJavaIoInputStream_(JavaIoInputStreamReader *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT JavaIoInputStreamReader *new_JavaIoInputStreamReader_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoInputStreamReader *create_JavaIoInputStreamReader_initWithJavaIoInputStream_(JavaIoInputStream *inArg);

FOUNDATION_EXPORT void JavaIoInputStreamReader_initWithJavaIoInputStream_withNSString_(JavaIoInputStreamReader *self, JavaIoInputStream *inArg, NSString *charsetName);

FOUNDATION_EXPORT JavaIoInputStreamReader *new_JavaIoInputStreamReader_initWithJavaIoInputStream_withNSString_(JavaIoInputStream *inArg, NSString *charsetName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoInputStreamReader *create_JavaIoInputStreamReader_initWithJavaIoInputStream_withNSString_(JavaIoInputStream *inArg, NSString *charsetName);

FOUNDATION_EXPORT void JavaIoInputStreamReader_initWithJavaIoInputStream_withJavaNioCharsetCharsetDecoder_(JavaIoInputStreamReader *self, JavaIoInputStream *inArg, JavaNioCharsetCharsetDecoder *dec);

FOUNDATION_EXPORT JavaIoInputStreamReader *new_JavaIoInputStreamReader_initWithJavaIoInputStream_withJavaNioCharsetCharsetDecoder_(JavaIoInputStream *inArg, JavaNioCharsetCharsetDecoder *dec) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoInputStreamReader *create_JavaIoInputStreamReader_initWithJavaIoInputStream_withJavaNioCharsetCharsetDecoder_(JavaIoInputStream *inArg, JavaNioCharsetCharsetDecoder *dec);

FOUNDATION_EXPORT void JavaIoInputStreamReader_initWithJavaIoInputStream_withJavaNioCharsetCharset_(JavaIoInputStreamReader *self, JavaIoInputStream *inArg, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT JavaIoInputStreamReader *new_JavaIoInputStreamReader_initWithJavaIoInputStream_withJavaNioCharsetCharset_(JavaIoInputStream *inArg, JavaNioCharsetCharset *charset) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoInputStreamReader *create_JavaIoInputStreamReader_initWithJavaIoInputStream_withJavaNioCharsetCharset_(JavaIoInputStream *inArg, JavaNioCharsetCharset *charset);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoInputStreamReader)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoInputStreamReader")
