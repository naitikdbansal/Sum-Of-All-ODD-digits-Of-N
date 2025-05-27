#include <iostream>
using namespace std;

int main(){

long long a;

long long sum=0;
long long j;
long long i;

cout<<"Enter number : ";
cin>>i;

while((j=i%10)!=0)
{
a=i/10;

if(j%2!=0){
sum=sum+j;
}

i=a;
}

cout<<"Sum of all ODD digits is : "<<sum<<endl;

return 0;

}
