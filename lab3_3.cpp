#include<iostream>
using namespace std;

int main(){
   float x=2;
   float sum;
   while(x<70){
       sum=sum+(1/x);
       x=x+1;
   }
    cout<<sum;
}