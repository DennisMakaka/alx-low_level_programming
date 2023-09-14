#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * positive_or_negative - Determines if an integer is positive, negative, or zero.
 * @i: The integer to check.
 */
void positive_or_negative(int i);

/**
 * largest_number - Finds the largest of three integers.
 * @a: The first integer.
 * @b: The second integer.
 * @c: The third integer.
 * Return: The largest integer.
 */
int largest_number(int a, int b, int c);

/**
 * print_remaining_days - Prints the remaining days in a year after a given date.
 * @month: The month of the date.
 * @day: The day of the date.
 * @year: The year of the date.
 */
void print_remaining_days(int month, int day, int year);

/**
 * convert_day - Converts a date (month and day) into a day-of-the-year representation.
 * @month: The month of the date.
 * @day: The day of the date.
 * Return: The day of the year.
 */
int convert_day(int month, int day);

#endif /* MAIN_H */
