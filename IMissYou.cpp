#include<iostream>
#include<vector>
#include<QApplication>
#include<QWidget>
#include<QNetwork>
#include<QHttp>
#include<QThread>
#include<QTimer>

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
class AWidget : public QWidget 
{

Q_OBJECT
~AWidget();
	public :
	AWidget(QObject*parent=0);
	private :
singal: //int 射门没() const;
slots:
  fuckYouMother() const;

};
class Test1 : public QThread
{


	public 
          slots:
	  void test哈给我(int );
	int mgw(QThread*obj);

};
class Test2: public QApplication
{
	Q_OBJECT
	virtual void test()=0;
	//virtual int interfacex()=0 ;
	//virtual QObject* create()=0;
};
class XMG 
{
}
int main(int argc,char*argv[])
{
   int x,y;
   double z;
   char m[]="Hello World";
   char *="Hello World";
}
