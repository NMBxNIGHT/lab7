#include<iostream>
#include <cmath>
using namespace std;
int adiff(int a,int b){
  int c=0;
  if(a>b){
      c= abs(a%360-b%360);
  }else{
  c= abs(b%360-a%360);
  }
   if(c>180){
    c=180-c%180;
   }
  return c;
}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
