/*
to achieve runtime polymorphism

*/
#include<bits/stdc++.h>
using namespace std;
class BaseClass{
	
	public:
		int var_base;
	 virtual	void display(){
			cout <<"Displaying var_base"<<var_base<<endl;
		}
};
class DerivedClass: public BaseClass{
public:
	int var_derived;
	void display(){
			cout <<"Displaying var_base"<<var_base<<endl;
			cout<<"Displaying var_derived"<<var_derived<<endl;
	}	
};

int main()
{
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    //point to derived
    base_class_pointer=&obj_derived;

//   base_class_pointer->display();--run the base display;

  base_class_pointer->display();//show derived display
	return 0;
}


//--output

/*--Displaying var_base1
Displaying var_derived2*/