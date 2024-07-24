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
        return M;
    }
    else
    {
        cout << "Both values are equal." << '\n';
        return a; // or return b since a == b
    }
}

int main()
{
    // int part
    int x1 = 0, x2 = 1;
    cout << "After comparing both values " << '\n'
         << maximum(x1, x2);

    // float part
    double y1 = 5.5, y2 = 5.5;
    cout << "After comparing both values " << '\n'
         << maximum(y1, y2);

    // string part
    string z1 = "marshmallow", z2 = "Hello World!";
    cout << " After comparing both values " << '\n'
         << maximum(z1, z2);

    return 0;
}