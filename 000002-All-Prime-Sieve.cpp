/*
* Sieve of Eratosthenes
* Print all prime numbers upto the number
* gfg - skillUp
* 16 - 09 - 2025
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> sieve(int n ) {
  
  vector<bool> prime(n+1, true);
  for(int p = 2; p * p <= n; p++){
      if(prime[p] == true){
          for(int i = p*p; i <= n; i += p)
              prime[i] = false;
      }
    }

  vector<int> res;
  for(int p = 2; p <= n; p++){
    if(prime[p]){
      res.pushback(p);
    }
  }

  return res;
}

int main(){
  int n = 35;
  vector<int> res = sieve(n);
  for(auto element : res) {
      cout << element << ' ';
  }

  return 0;
}
