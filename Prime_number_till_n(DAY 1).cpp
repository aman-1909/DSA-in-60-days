here#include <iostream>
using namespace std;

int main() 
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    cout <<num <<"\n";

    for (int a = 2; a <= num; a++) {
        int count = 0; 
        for (int b = 1; b <= a; b++) {
            if (a % b == 0) {
                count++;
            }
        }
        if (count == 2) {  
            cout << a << " ";
        }
    }
    return 0;
}
