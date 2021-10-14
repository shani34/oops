
/*rules for virtual funtions
1.They cannot be static 
2.They are accessed by object pointers
3.Virtual functions can be a friend of another class
4.A virtual function in base class might not be used.
5.if a virtual function is defined in a base class ,there is no neccesity of rediefinne in the derived class
*/
virtual void display()=0;//do nohting 

 //use to make class abstruct class mainly --atleast one viru=tual function
//we have to define in the child class/ derived class