// Implement the functions here
#include "safeint.h"
#include <iostream>

SafeInt::SafeInt(SafeInt const &obj)
{
    value = obj.value;
}

int SafeInt::getvalue() const
{

    return value;
}

void SafeInt::operator++()
{

    if ((value + 1) > INT_MAX or (value + 1) < 0)
        throw std::overflow_error("Overflowed!");
    ++value;
}

SafeInt SafeInt::operator*(SafeInt const &obj)
{

    SafeInt result(0);
    result.value = value * obj.value;
    if ((value > 0 && obj.value <0) or (value < 0 && obj.value >0))
    {
        if (result.value < INT_MIN or result.value > 0)
            throw std::overflow_error("Underflowed!");
    }
    else if (result.value < INT_MAX or result.value < 0)
        throw std::overflow_error("Overflowed!");

    return result;
}

SafeInt SafeInt::operator+(SafeInt const &obj)
{

    SafeInt result(0);
    result.value = value + obj.value;
    if (value >= obj.value)
    {
        if (result.value > INT_MAX or result.value < 0)
            throw std::overflow_error("Overflowed!");
    }
    else if (result.value < INT_MIN or result.value > 0)
        throw std::overflow_error("Underflowed!");

    return result;
}

SafeInt SafeInt::operator-(SafeInt const &obj)
{

    SafeInt result(0);
    result.value = value - obj.value;
    if (value >= obj.value)
    {
        if (result.value > INT_MAX or result.value < 0)
            throw std::overflow_error("Overflowed!");
    }
    else if (result.value < INT_MIN or result.value > 0)
        throw std::overflow_error("Underflowed!");

    return result;
}

int SafeInt::operator()()
{

    return value;
}

void SafeInt::operator=(int const &v)
{

    value = v;
}

std::ostream &operator<<(std::ostream &stream, SafeInt const &obj)
{

    stream << obj.getvalue();
    return stream;
}