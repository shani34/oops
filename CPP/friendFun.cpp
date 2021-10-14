

/*
properties of friend function
1.not in the class scope
2.since it is not in the scope of the class ,it canot be called from the object of class  //c1.sumComple=invalid
3.can be invoked without the help of any object
4.usually contains the arguments as objects
5.can be declared int the public private section of the class 
6.it cannot the access the members directly by their names and need object_name.member_name to access any member

*/

#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a,b;
    public:
           void setNumber(int n1,int n2)
           {
               a=n1;
               b=n2;
           }
           //non member allow to access private members
           friend Complex sumComplex(Complex o1,Complex o2);
           void printNumber(){
               cout <<"Your number is"<<a <<"+"<<b<<"i"<<endl;
               
           }
};
Complex sumComplex(Complex o1,Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b,o2.b));
    return o3;
}
int main()
{
    
    Complex c1,c2,sum;
    c1.setNumber(1,4);
    c1.printNumber();
    
    
    c2.setNumber(5,8);
    c2.printNumber();
    
    sum=sumComplex(c1,c2);
    sum.printNumber();
}

//-- output 
/*
Your number is1+4i
Your number is5+8i
Your number is6+8i
*/