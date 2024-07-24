// Prompt
#include <iostream>

using namespace std;

template <class T> // create template and function 'maximum' which will compare a and b then find which one is larger
T maximum(const T &a, const T &b)
{
    if (a != b)
    {
        auto M = (a < b) ? b : a; // check if a < b is True then return b, but if False then return a
        cout << M << " is larger" << '\n';
    }
    else
    {
        cout << "Both values are equal." << '\n';
    }
}

int main()
{
    // int part
    int x1 = 0, x2 = 1;
    cout << "Comparing both values " << maximum(x1, x2);

    return 0;
}