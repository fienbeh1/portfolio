#include <iostream>
using namespace std;

int main()
{
    float estatura[10], sum = 0;
    cout << "Capture estatura: ";

    //  Storing 5 number entered by user in an array
    //  Finding the sum of numbers entered
    for (int i = 0; i <= 10; ++i)
    {
        cin >> estatura[i];
        sum += estatura[i];
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
