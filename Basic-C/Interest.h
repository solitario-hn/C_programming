/* Interest.h — macro definitions */
#ifndef INTEREST_H
#define INTEREST_H

/* Always wrap args in () to avoid precedence bugs */
#define SIMPLE_INTEREST(P, R, T)   (((P) * (R) * (T)) / 100.0)
#define AMOUNT(P, R, T)            ((P) + SIMPLE_INTEREST(P, R, T))

#endif