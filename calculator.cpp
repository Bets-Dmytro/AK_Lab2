#include "calculator.h"
//Bets D.O.
//IO-05
//Lab work 2
//
//(It starts with one) One thing, I don't know why
//It doesn't even matter how hard you try
//Keep that in mind, I designed this rhyme
//To explain in due time all I know
int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
