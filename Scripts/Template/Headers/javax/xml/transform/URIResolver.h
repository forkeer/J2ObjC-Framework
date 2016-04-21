//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/URIResolver.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlTransformURIResolver")
#ifdef RESTRICT_JavaxXmlTransformURIResolver
#define INCLUDE_ALL_JavaxXmlTransformURIResolver 0
#else
#define INCLUDE_ALL_JavaxXmlTransformURIResolver 1
#endif
#undef RESTRICT_JavaxXmlTransformURIResolver

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxXmlTransformURIResolver_) && (INCLUDE_ALL_JavaxXmlTransformURIResolver || defined(INCLUDE_JavaxXmlTransformURIResolver))
#define JavaxXmlTransformURIResolver_

@protocol JavaxXmlTransformSource;

/*!
 @brief <p>An object that implements this interface that can be called by the processor
 to turn a URI used in document(), xsl:import, or xsl:include into a Source object.
 */
@protocol JavaxXmlTransformURIResolver < NSObject, JavaObject >

/*!
 @brief Called by the processor when it encounters
 an xsl:include, xsl:import, or document() function.
 @param href An href attribute, which may be relative or absolute.
 @param base The base URI against which the first argument will be made
 absolute if the absolute URI is required.
 @return A Source object, or null if the href cannot be resolved,
 and the processor should try to resolve the URI itself.
 @throws TransformerException if an error occurs when trying to
 resolve the URI.
 */
- (id<JavaxXmlTransformSource>)resolveWithNSString:(NSString *)href
                                      withNSString:(NSString *)base;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformURIResolver)

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformURIResolver)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxXmlTransformURIResolver")
