//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/Timestamp.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlTimestamp")
#ifdef RESTRICT_JavaSqlTimestamp
#define INCLUDE_ALL_JavaSqlTimestamp 0
#else
#define INCLUDE_ALL_JavaSqlTimestamp 1
#endif
#undef RESTRICT_JavaSqlTimestamp

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlTimestamp_) && (INCLUDE_ALL_JavaSqlTimestamp || defined(INCLUDE_JavaSqlTimestamp))
#define JavaSqlTimestamp_

#define RESTRICT_JavaUtilDate 1
#define INCLUDE_JavaUtilDate 1
#include "../../java/util/Date.h"

@class IOSObjectArray;

/*!
 @brief A Java representation of the SQL <code>TIMESTAMP</code> type.
 It provides the
 capability of representing the SQL <code>TIMESTAMP</code> nanosecond value, in
 addition to the regular date/time value which has millisecond resolution.
 <p>
 The <code>Timestamp</code> class consists of a regular date/time value, where only
 the integral seconds value is stored, plus a nanoseconds value where the
 fractional seconds are stored.
 <p>
 The addition of the nanosecond value field to the <code>Timestamp</code> object
 makes it significantly different from the <code>java.util.Date</code> object which
 it extends. Users should be aware that <code>Timestamp</code> objects are not
 interchangable with <code>java.util.Date</code> objects when used outside the
 confines of the <code>java.sql</code> package.
 - seealso: Date
 - seealso: Time
 - seealso: java.util.Date
 */
@interface JavaSqlTimestamp : JavaUtilDate

#pragma mark Public

/*!
 @brief Returns a <code>Timestamp</code> corresponding to the time specified by the
 supplied values for <i>Year</i>, <i>Month</i>, <i>Date</i>, <i>Hour</i>,
 <i>Minutes</i>, <i>Seconds</i> and <i>Nanoseconds</i>.
 @param theYear
 specified as the year minus 1900.
 @param theMonth
 specified as an integer in the range [0,11].
 @param theDate
 specified as an integer in the range [1,31].
 @param theHour
 specified as an integer in the range [0,23].
 @param theMinute
 specified as an integer in the range [0,59].
 @param theSecond
 specified as an integer in the range [0,59].
 @param theNano
 which defines the nanosecond value of the timestamp specified
 as an integer in the range [0,999'999'999]
 @throws IllegalArgumentException
 if any of the parameters is out of range.
 */
- (instancetype)initWithInt:(jint)theYear
                    withInt:(jint)theMonth
                    withInt:(jint)theDate
                    withInt:(jint)theHour
                    withInt:(jint)theMinute
                    withInt:(jint)theSecond
                    withInt:(jint)theNano __attribute__((deprecated));

/*!
 @brief Returns a <code>Timestamp</code> object corresponding to the time represented
 by a supplied time value.
 @param theTime
 a time value in the format of milliseconds since the Epoch
 (January 1 1970 00:00:00.000 GMT).
 */
- (instancetype)initWithLong:(jlong)theTime;

/*!
 @brief Returns <code>true</code> if this timestamp object is later than the supplied
 timestamp, otherwise returns <code>false</code>.
 @param theTimestamp
 the timestamp to compare with this timestamp object.
 @return <code>true</code> if this <code>Timestamp</code> object is later than the
 supplied timestamp, <code>false</code> otherwise.
 */
- (jboolean)afterWithJavaSqlTimestamp:(JavaSqlTimestamp *)theTimestamp;

/*!
 @brief Returns <code>true</code> if this <code>Timestamp</code> object is earlier than the
 supplied timestamp, otherwise returns <code>false</code>.
 @param theTimestamp
 the timestamp to compare with this <code>Timestamp</code> object.
 @return <code>true</code> if this <code>Timestamp</code> object is earlier than the
 supplied timestamp, <code>false</code> otherwise.
 */
- (jboolean)beforeWithJavaSqlTimestamp:(JavaSqlTimestamp *)theTimestamp;

/*!
 @brief Compares this <code>Timestamp</code> object with a supplied <code>Timestamp</code>
 object.
 @param theObject
 the timestamp to compare with this <code>Timestamp</code> object,
 passed as an <code>Object</code>.
 @return <dd>
 <dl>
 <code>0</code> if the two <code>Timestamp</code> objects are equal in time
 </dl>
 <dl>
 a value <code>< 0</code> if this <code>Timestamp</code> object is before
 the supplied <code>Timestamp</code> and a value
 </dl>
 <dl>
 <code>> 0</code> if this <code>Timestamp</code> object is after the
 supplied <code>Timestamp</code>
 </dl>
 </dd>
 @throws ClassCastException
 if the supplied object is not a <code>Timestamp</code> object.
 */
- (jint)compareToWithId:(JavaUtilDate *)theObject;

/*!
 @brief Compares this <code>Timestamp</code> object with a supplied <code>Timestamp</code>
 object.
 @param theTimestamp
 the timestamp to compare with this <code>Timestamp</code> object,
 passed in as a <code>Timestamp</code>.
 @return one of the following:
 <ul>
 <li><code>0</code>, if the two <code>Timestamp</code> objects are
 equal in time</li>
 <li><code>< 0</code>, if this <code>Timestamp</code> object is before the
 supplied <code>Timestamp</code></li>
 <li> <code>> 0</code>, if this <code>Timestamp</code> object is after the
 supplied <code>Timestamp</code></li>
 </ul>
 */
- (jint)compareToWithJavaSqlTimestamp:(JavaSqlTimestamp *)theTimestamp;

/*!
 @brief Tests to see if this timestamp is equal to a supplied object.
 @param theObject
 the object to which this timestamp is compared.
 @return <code>true</code> if this <code>Timestamp</code> object is equal to the
 supplied <code>Timestamp</code> object<br><code>false</code> if the object
 is not a <code>Timestamp</code> object or if the object is a <code>Timestamp</code>
  but represents a different instant in time.
 */
- (jboolean)isEqual:(id)theObject;

/*!
 @brief Tests to see if this timestamp is equal to a supplied timestamp.
 @param theTimestamp
 the timestamp to compare with this <code>Timestamp</code> object,
 passed as an <code>Object</code>.
 @return <code>true</code> if this <code>Timestamp</code> object is equal to the
 supplied <code>Timestamp</code> object, <code>false</code> otherwise.
 */
- (jboolean)equalsWithJavaSqlTimestamp:(JavaSqlTimestamp *)theTimestamp;

/*!
 @brief Gets this <code>Timestamp</code>'s nanosecond value
 @return The timestamp's nanosecond value, an integer between 0 and
 999,999,999.
 */
- (jint)getNanos;

/*!
 @brief Returns the time represented by this <code>Timestamp</code> object, as a long
 value containing the number of milliseconds since the Epoch (January 1
 1970, 00:00:00.000 GMT).
 @return the number of milliseconds that have passed since January 1 1970,
 00:00:00.000 GMT.
 */
- (jlong)getTime;

/*!
 @brief Sets the nanosecond value for this <code>Timestamp</code>.
 @param n
 number of nanoseconds.
 @throws IllegalArgumentException
 if number of nanoseconds smaller than 0 or greater than
 999,999,999.
 */
- (void)setNanosWithInt:(jint)n;

/*!
 @brief Sets the time represented by this <code>Timestamp</code> object to the
 supplied time, defined as the number of milliseconds since the Epoch
 (January 1 1970, 00:00:00.000 GMT).
 @param theTime
 number of milliseconds since the Epoch (January 1 1970,
 00:00:00.000 GMT).
 */
- (void)setTimeWithLong:(jlong)theTime;

/*!
 @brief Returns the timestamp formatted as a String in the JDBC Timestamp Escape
 format, which is <code>"yyyy-MM-dd HH:mm:ss.nnnnnnnnn"</code>.
 @return A string representing the instant defined by the <code>Timestamp</code>
 , in JDBC Timestamp escape format.
 */
- (NSString *)description;

/*!
 @brief Creates a <code>Timestamp</code> object with a time value equal to the time
 specified by a supplied String holding the time in JDBC timestamp escape
 format, which is <code>"yyyy-MM-dd HH:mm:ss.nnnnnnnnn</code>"
 @param s
 the <code>String</code> containing a time in JDBC timestamp escape
 format.
 @return A <code>Timestamp</code> object with time value as defined by the
 supplied <code>String</code>.
 @throws IllegalArgumentException
 if the provided string is <code>null</code>.
 */
+ (JavaSqlTimestamp *)valueOfWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlTimestamp)

FOUNDATION_EXPORT void JavaSqlTimestamp_initWithInt_withInt_withInt_withInt_withInt_withInt_withInt_(JavaSqlTimestamp *self, jint theYear, jint theMonth, jint theDate, jint theHour, jint theMinute, jint theSecond, jint theNano);

FOUNDATION_EXPORT JavaSqlTimestamp *new_JavaSqlTimestamp_initWithInt_withInt_withInt_withInt_withInt_withInt_withInt_(jint theYear, jint theMonth, jint theDate, jint theHour, jint theMinute, jint theSecond, jint theNano) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlTimestamp *create_JavaSqlTimestamp_initWithInt_withInt_withInt_withInt_withInt_withInt_withInt_(jint theYear, jint theMonth, jint theDate, jint theHour, jint theMinute, jint theSecond, jint theNano);

FOUNDATION_EXPORT void JavaSqlTimestamp_initWithLong_(JavaSqlTimestamp *self, jlong theTime);

FOUNDATION_EXPORT JavaSqlTimestamp *new_JavaSqlTimestamp_initWithLong_(jlong theTime) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlTimestamp *create_JavaSqlTimestamp_initWithLong_(jlong theTime);

FOUNDATION_EXPORT JavaSqlTimestamp *JavaSqlTimestamp_valueOfWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlTimestamp)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlTimestamp")
