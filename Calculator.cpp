#include<iostream>
using namespace std;
int main(){
    int cal;
    double a,b,c,d,e;

cout<<"for using the calculator, 1 for addition , 2 for subtraction, 3 multiplication, 4 for division, 5 for sin , 6 for cos, 7 for tan, 8 for exponent"<<endl;
cin>>cal;

switch (cal)
{
case 1:
cout << "enter the two numbers"<<endl;
cin>>a>>b;
cout<<"the sum is "<<(a+b);
    break;
case 2:
cout << "enter the two numbers"<<endl;
cin>>a>>b;
cout<<"the differnce is "<<(a-b);
break;
case 3:
cout << "enter the two numbers"<<endl;
cin>>a>>b;
cout<<"the product is "<<(a*b);
break;
case 4:
cout << "enter the two numbers"<<endl;
cin>>a>>b;
if(b==0){
    cout<<"not defined";
}
else{
cout<<"the qoutient is "<<(a/b);
}
break;
case 5:
cout<< "enter the angle"<<endl;
cin >> b;
a=(b)-((b*b*b)/6)+((b*b*b*b*b)/120)-((b*b*b*b*b*b*b)/5040)+((b*b*b*b*b*b*b*b*b)/362880);
cout<<a;
break;
case 6:
cout<< "enter the angle"<<endl;
cin >> b;
a=(1)-((b*b)/2)+((b*b*b*b)/24)-((b*b*b*b*b*b)/720)+((b*b*b*b*b*b*b*b)/40320);
cout<<a;
break;
case 7:
cout<< "enter the angle"<<endl;
cin >> b;
a=(b)-((b*b*b)/6)+((b*b*b*b*b)/120)-((b*b*b*b*b*b*b)/5040)+((b*b*b*b*b*b*b*b*b)/362880);
c=(1)-((b*b)/2)+((b*b*b*b)/24)-((b*b*b*b*b*b)/720)+((b*b*b*b*b*b*b*b)/40320);
if(c==0){
    cout<<"not defined";

}
else{
d=a/c;
cout<<d;
}
break;
case 8:
cout<<"enter the power"<<endl;
cin>>a;
b=(1)+(a)+((a*a)/2)+((a*a*a)/6)+((a*a*a*a)/24)+((a*a*a*a*a)/120)+((a*a*a*a*a*a)/720)+((a*a*a*a*a*a*a)/5040);
cout<<b;
break;

default:
cout<< "done";
    break;
}



    return 0;
}