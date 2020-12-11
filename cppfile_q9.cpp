//Write a program using different operators such as '+' to concatenates two strings, (<, >, ==) to compare two strings.


#include <iostream>
using namespace std;

class compare
{
    string s1;

    public:
    void getdata()
	{
        cout<<"\nEnter the string: ";
        cin >>s1;
    }
    void showdata()
    {
    	cout<<"\nString--";
    	cout<<s1;
	}

  	void operator ==(compare &obj);
  	compare operator +(compare &obj);
  	void operator >(compare &obj);
  	void operator <(compare &obj);
  	void operator +=(compare &obj);
};
void compare :: operator==(compare &obj)
{
    if(this->s1 == obj.s1)
        cout<<"\nString  matches!";
    else
        cout<<"\nString does not match!";
}
compare compare :: operator+(compare &obj)
{
	compare temp;
	cout<<"\nAdding Strings";
	temp.s1=this->s1+obj.s1;
	return temp;
}
void compare :: operator>(compare &obj)
{
	if(this->s1 > obj.s1)
	cout<<"\n "<<this->s1<<" is greater ";
	else
	cout<<"\n "<<obj.s1<<" is greater ";
}
void compare :: operator<(compare &obj)
{
	if(this->s1 < obj.s1)
	cout<<"\n "<<this->s1<<" is less than "<<obj.s1;
	else
	cout<<"\n "<<obj.s1<<" is less than "<<this->s1;
}
void compare :: operator +=(compare &obj)
{
    this->s1 = this->s1 + obj.s1;
    cout<<"\nAfter addition: "<<this->s1;
}
int main()
{
    compare obj1,obj2,obj3;
    obj1.getdata();
    obj2.getdata();

	obj1==obj2;
			
	obj1.getdata();
    obj2.getdata();
	obj3=obj1+obj2;
	obj3.showdata();
	
	obj1.getdata();
    obj2.getdata();
	obj1>obj2;
	
	obj1.getdata();
    obj2.getdata();
	obj1<obj2;
	
	obj1.getdata();
    obj2.getdata();
	obj1+=obj2;
}
