#include <iostream>

using namespace std;

namespace _gh{

	class A{

	public:
		A(){std::cout<<"构造";}

		~A(){std::cout<<"析构";}
		
		void display(void){std::cout<<A::a<<endl;}

		int a = 10;	
	};
/*
	class B{
	
	public:
		//static A aa;
		inline static A aa;
	};

	//A B::aa;
*/	
	void myfunc(void)
	{
		static A aa2;	
	}
};



int main()
{
	//_gh::B bb;
	//bb.aa.display();

	_gh::myfunc();
	_gh::myfunc();
	return 0;
}


