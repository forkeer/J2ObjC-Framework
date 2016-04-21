//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/Date.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlDate")
#ifdef RESTRICT_JavaSqlDate
#define INCLUDE_ALL_JavaSqlDate 0
#else
#define INCLUDE_ALL_JavaSqlDate 1
#endif
#undef RESTRICT_JavaSqlDate

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlDate_) && (INCLUDE_ALL_JavaSqlDate || defined(INCLUDE_JavaSqlDate))
#define JavaSqlDate_

#define RESTRICT_JavaUtilDate 1
#define INCLUDE_JavaUtilDate 1
#include "../../java/util/Date.h"

@class IOSObjectArray;

/*!
 @brief A class which can consume and produce dates in SQL <code>Date</code> format.
 <p>
 Dates are represented in SQL as <code>yyyy-MM-dd</code>. Note that this date
 format only deals with year, month and day values. There are no values for
 hours, minutes, seconds.
 <p>
 This is unlike the familiar <code>java.util.Date</code> object, which also includes
 values for hours, minutes, seconds, and milliseconds.
 <p>
 Time points are handled as millisecond values - milliseconds since the Epoch,
 January 1st 1970, 00:00:00.000 GMT. Time values passed to the <code>java.sql.Date</code>
  class are "normalized" to the time 00:00:00.000 GMT on the
 date implied by the time value.
 */
@interface JavaSqlDate : JavaUtilDate

#pragma mark Public

/*!
 @brief Constructs a <code>Date</code> object corresponding to the supplied year,
 month and day.
 @param theYear
 the year, specified as the year minus 1900. Must be in the
 range <code>[0,8099]</code>.
 @param theMonth
 the month, specified as a number with 0 = January. Must be in
 the range <code>[0,11]</code>.
 @param theDay
 the day in the month. Must be in the range <code>[1,31]</code>.
 */
- (instancetype)initWithInt:(jint)theYear
                    withInt:(jint)theMonth
                    withInt:(jint)theDay __attribute__((deprecated));

/*!
 @brief Creates a date which corresponds to the day determined by the supplied
 milliseconds time value <code>theDate</code>.
 @param theDate
 a time value in milliseconds since the epoch - January 1 1970
 00:00:00 GMT. The time value (hours, minutes, seconds,
 milliseconds) stored in the <code>Date</code> object is adjusted to
 correspond to 00:00:00 GMT on the day determined by the supplied
 time value.
 */
- (instancetype)initWithLong:(jlong)theDate;

/*!
 @return does not return anything.
 @throws IllegalArgumentException
 if this method is called.
 */
- (jint)getHours __attribute__((deprecated));

/*!
 @return does not return anything.
 @throws IllegalArgumentException
 if this method is called.
 */
- (jint)getMinutes __attribute__((deprecated));

/*!
 @return does not return anything.
 @throws IllegalArgumentException
 if this method is called.
 */
- (jint)getSeconds __attribute__((deprecated));

/*!
 @param theHours
 the number of hours to set.
 @throws IllegalArgumentException
 if this method is called.
 */
- (void)setHoursWithInt:(jint)theHours __attribute__((deprecated));

/*!
 @param theMinutes
 the number of minutes to set.
 @throws IllegalArgumentException
 if this method is called.
 */
- (void)setMinutesWithInt:(jint)theMinutes __attribute__((deprecated));

/*!
 @param theSeconds
 the number of seconds to set.
 @throws IllegalArgumentException
 if this method is called.
 */
- (void)setSecondsWithInt:(jint)theSeconds __attribute__((deprecated));

/*!
 @brief Sets this date to a date supplied as a milliseconds value.
 The date is
 set based on the supplied time value and rounded to zero GMT for that day.
 @param theTime
 the time in milliseconds since the Epoch.
 */
- (void)setTimeWithLong:(jlong)theTime;

/*!
 @brief Produces a string representation of the date in SQL format
 @return a string representation of the date in SQL format - <code>"yyyy-MM-dd"</code>.
 */
- (NSString *)description;

/*!
 @brief Creates a <code>Date</code> from a string representation of a date in SQL
 format.
 @param dateString
 the string representation of a date in SQL format - " <code>yyyy-MM-dd</code>".
 @return the <code>Date</code> object.
 @throws IllegalArgumentException
 if the format of the supplied string does not match the SQL
 format.
 */
+ (JavaSqlDate *)valueOfWithNSString:(NSString *)dateString;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlDate)

FOUNDATION_EXPORT void JavaSqlDate_initWithInt_withInt_withInt_(JavaSqlDate *self, jint theYear, jint theMonth, jint theDay);

FOUNDATION_EXPORT JavaSqlDate *new_JavaSqlDate_initWithInt_withInt_withInt_(jint theYear, jint theMonth, jint theDay) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlDate *create_JavaSqlDate_initWithInt_withInt_withInt_(jint theYear, jint theMonth, jint theDay);

FOUNDATION_EXPORT void JavaSqlDate_initWithLong_(JavaSqlDate *self, jlong theDate);

FOUNDATION_EXPORT JavaSqlDate *new_JavaSqlDate_initWithLong_(jlong theDate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlDate *create_JavaSqlDate_initWithLong_(jlong theDate);

FOUNDATION_EXPORT JavaSqlDate *JavaSqlDate_valueOfWithNSString_(NSString *dateString);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlDate)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlDate")
