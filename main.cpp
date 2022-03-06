#include <iostream>

using namespace std;

int main(){
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    int max = a;
    if (b > a) max = b;
    int min = a;
    if (b < a) min = b;
    cout << "a + b = "<< a + b << '\n'
    << "a - b = "<< a - b << '\n'
    << "a * b = "<< a * b << '\n'
    << "a / b = "<< a / b << '\n'
    <<"max in numbers:" << max <<'\n'
    << "min in numbers:" << min << '\n';
    return 0;
}
