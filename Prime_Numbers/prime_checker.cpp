#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int n,c=0;
  cout<<"enter any number:"<<endl;
  cin>>n;
  for(int i=1;i<=n;i++){
    if(n%i==0)
    c++;}
    if(c==2)
    cout<<"it is prime"<<endl;
    else
    cout<<"not prime"<<endl;
}
