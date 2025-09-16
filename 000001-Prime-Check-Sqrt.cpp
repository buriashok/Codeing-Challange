/*
* To check the number is prime or not.
* A prime number is a natural number greater than 1 that has  exactly two distinct 
  positive divisors 1 and itself.
* Except for 2  and 3, all primes are of the form: 6k-1 or 6k+1 where k is an integer.
* 6k, 6k+2, 6k+3, 6k+4 which are guaranteed composites.
* skillUp - gfg
* Program ONE
*/
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
  
  // Check n is 0 or 1
  if ( n == 0 || n == 1)
      return false;

  // Check n is 2 or 3
  if ( n == 2 or n == 3)
      return true;

  // Check n is divisible by 2 or 3
  if ( n % 2 == 0 || n % 3 == 0 )
      return false;

  // Check from 5 to sqrt of n 
  // Iterate i by (i+6)
  for (int i = 5; i <= sqrt(n); i = i + 6)
      if ( n % i == 0 || n % ( i + 2 ) == 0 )
          return false;
  return true;
}

int main() {
  int n;
  cout << "Enter the number here : ";
  cin >> n;
  if (isPrime(n)) cout << "true";
  else cout << "false";
  return 0;
}
