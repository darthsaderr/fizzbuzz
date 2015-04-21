#include<iostream>
using namespace std;

const int MAX=100;

int main(){
  int i;
  for(i=1;i<=MAX;i++) {
    if(!i%3 && !i%5){
      cout << "FizzBuzz\n";
    } else if(!i%3 && i%5){
      cout << "Fizz\n";
    } else if(!i%5 && i%3){
      cout << "Buzz\n";
    } else
      cout << i << endl;
	} 

  
  return 0;
}
