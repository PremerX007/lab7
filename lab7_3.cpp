#include<iostream>

using namespace std;

int adiff(int a, int b){
  int x;
  if (a>b){
    x = a-b;
  }else{
    x = b-a;
  }

  if((x%360)>180){
    return 360-x%360;
  }else{
    return x%360;
  }
}

int main(){
  cout << adiff(180,270) << endl;
  cout << adiff(210,45) << endl;
  cout << adiff(0,360) << endl;
  cout << adiff(10,350) << endl;//
  cout << adiff(95,260) << endl;
  cout << adiff(90,-90) << endl;
  cout << adiff(1000,280) << endl;
  cout << adiff(60,244) << endl;//
}
