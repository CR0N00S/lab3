#include<iostream>
using namespace std;

int main(){
   float x=6;
   float sum;
   while(x<20){
       sum=sum+(1/x);
       x=x+1;
   }
    cout<<sum;
}