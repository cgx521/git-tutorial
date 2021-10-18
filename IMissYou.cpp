#include<iostream>
#include<vector>
#include<QApplication>


template<typename A>
 
struct abstructFactory
{
	template<typename B>
    abstructFatory()
                : A(new A), b(new B)
    {  }
	~abstrcutFactory()
	{delete a, delete b;}
	private :
       A *a;
	B*b;
   
};
int main(int argc,char*argv[])
{
   int x,y;
   double z;
   char m[]="Hello World";
   char *="Hello World";
}
