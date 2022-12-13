#include<iostream>
#include<cmath>
using namespace std;
int adiff(int a,int b)
{
  int x = abs(((360+(b % 360)) % 360)-((360+(a % 360)) % 360));
  if(x<180)
  {
  return x;
  }
  else
  {
  return 360-x;
  }
}

int main(){
  cout << adiff(180,270) << "\n";
  cout << adiff(210,45) << "\n";
  cout << adiff(0,360) << "\n";
  cout << adiff(10,350) << "\n";
  cout << adiff(95,260) << "\n";
  cout << adiff(90,-90) << "\n";
  cout << adiff(1000,280) << "\n";
  cout << adiff(60,244) << "\n";
}
