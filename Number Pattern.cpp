#include <iostream>
using namespace std;

void pattern(int n)
{
    int num = 1;
    for (int i=0; i<n; i++) {
        for (int t=0; t<=i; t++)
            cout << num << " ";
        num = num + 1;
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Input a number: ";
    cin >> n;
    pattern(n);
    return 0;
}
