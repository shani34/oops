/*polymorphism in cpp

many form  -- one name multiple form

eg.shape -circle,square,triangle
Types:
1.compile time polymorphism/Static
2.Run time polymorphism/Dynamic

1.compile time polymorphism/static

decision at compile time 
binding at compile time

i.function overloading 
ii.operator overloading


2.Run time polymorphism/Dynamic

 decides at run time 

i.Virtual Functions


i.function overloading 
*/
//--pointers to derived class
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class BaseClass{
	
	public:
		int var_base;
		void display(){
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
    base_class_pointer=&obj_derived;


  base_class_pointer->var_base=34;
  //base_class_pointer->var_derived=134; ///thorw an error
  base_class_pointer->display();
  DerivedClass *derived_class_pointer;
  derived_class_pointer=&obj_derived;
  derived_class_pointer->var_base=2434;
  derived_class_pointer->var_derived=134;
  derived_class_pointer->display();
	return 0;
}


//--concept--late binding
//if we have make pointer of base class pointed to the object of derived class then the display function of base class will run 
//pointer jis class ka uska display run hoga

//--output

/*
 Displaying var_base34
Displaying var_base2434
Displaying var_derived134;*/