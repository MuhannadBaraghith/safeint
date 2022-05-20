#include <stdexcept>
#include <bits/stdc++.h>

class SafeInt
{
private:
    int value;

public:
    SafeInt(int value) : value(value) {}
    SafeInt(SafeInt const &obj);

    SafeInt operator+(SafeInt const &obj);
    SafeInt operator-(SafeInt const &obj);
    SafeInt operator*(SafeInt const &obj);
    void operator++();
    void operator=(int const &obj);
    int operator()();
    int getvalue() const;

    friend std::ostream &operator<<(std::ostream &os, SafeInt const &obj);
};