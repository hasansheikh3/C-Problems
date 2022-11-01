#include <iostream>
using namespace std;

void primeNumber(int numb){
  int i, chk=0, j;
  cout << "Prime Numbers between 2 and " << numb << " are" << endl;
  for (i=1;i<=numb;i++){
    for (j=2;j<i;j++){
      if (i%j==0){
        chk++;
        break;
      }
    }
    if(chk==0 && i!=1){
      cout << i << endl;
    }
    chk = 0;
  }
  cout<<endl;
  
}

int main() {
  primeNumber(50);
}