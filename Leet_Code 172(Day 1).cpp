#include <iostream>
using namespace std;

// Factorial Trailing Zeros

int main() 
{
  int num,count=0;
  cout << "Enter number: \n";
  cin  >> num;
  for(int a=5;num/a>=1;a=5*a) {
    count+=num/a;
  }
  cout << "The number of trailing zero in  " << num <<" is " << count ;
    return 0;
}

