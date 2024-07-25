#include <iostream>
#include <string>

using namespace std;

template <typename T>

void maximum(const T &a, const T &b)
{
    if constexpr (is_same_v<T, string>)
    { // Check if the type T is a string
        if (a.length() != b.length())
        {
            const T &value = (a.length() < b.length()) ? b : a;
            cout << value << " has more characters.\n";
        }
        else
        {
            cout << "Both values have equal length.\n";
        }
    }
    else
    {
        const T &value = (a < b) ? b : a;
        if (a != b)
        {
            cout << value << " is bigger.\n";
        }
        else
        {
            cout << "Both values are equal.\n";
        }
    }
}

int main()
{
    // int part
    int x1 = 0, x2 = 1;
    cout << "After comparing both values: ";
    maximum(x1, x2);

    // float part
    double y1 = 5.5, y2 = 5.5;
    cout << "After comparing both values: ";
    maximum(y1, y2);

    // string part
    string z1 = "Iron Man", z2 = "Spiderman";
    cout << "After comparing both values: ";
    maximum(z1, z2);

    return 0;
}
