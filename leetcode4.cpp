#include <iostream>
using namespace std;

bool checkPalindrome(int original) {

  int reverseNum = 0;
  int tempOriginal = original;

  while (tempOriginal > 0) {

    int lastDigit = tempOriginal % 10;
    reverseNum = reverseNum * 10 + lastDigit;
    tempOriginal = tempOriginal / 10;
  }

  if (original == reverseNum) {
    cout<<"Yes";
  } else {
    cout<<"No";
  }
  
  return 0;
}
int main()
{
    int n;
    cin>>n;
	checkPalindrome(n);
}
