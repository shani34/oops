/*A copy constructor is a member function that initializes an object using another object of the same class.

Example-
*/
class A{
int x,y;
A(int x, int y){
 this->x=x;
 this->y=y;
}

};
int main(){
A a1(2,3);
A a2=a1;     //default copy constructor is called
return 0;
}
/*

1.We can define our copy constructor. If we don’t define a copy constructor then the default copy constructor is called.
*/

