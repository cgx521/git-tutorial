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
slots:
	void display();
	private :
	QThread* thread;
	QTimer* timer;
	int count;

};
int main(int argc,char*argv[])
{
   int x,y;
   double z;
   char m[]="Hello World";
   char *="Hello World";
}
