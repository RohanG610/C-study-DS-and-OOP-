#include<iostream>

using namespace std;

class A
{
    public:
        A(){
            callA = 0;
        }
    private:
        int callA;
        void inc(){
            callA++;
        }

    protected:
        void func(int & a)
        {
            a = a * 2;
            inc();
        }
    public:
        int getA(){
            return callA;
        }
};

class B
{
    public:
        B(){
            callB = 0;
        }
    private:
        int callB;
        void inc(){
            callB++;
        }
    protected:
        void func(int & a)
        {
            a = a * 3;
            inc();
        }
    public:
        int getB(){
            return callB;
        }
};

class C
{
    public:
        C(){
            callC = 0;
        }
    private:
        int callC;
        void inc(){
            callC++;
        }
    protected:
        void func(int & a)
        {
            a = a * 5;
            inc();
        }
    public:
        int getC(){
            return callC;
        }
};

class D:public A,B,C
{

	int val;
	public:
	    D()
		{
		    val = 1;
		}

		 void update_val(int new_val)
		 {
         	val = new_val;
            int temp = new_val;
            while(new_val>1)
            {
                if(new_val%2==0)
                {
                    A::func(new_val);
                    new_val=new_val/4;
                }
                if(new_val%3==0)
                {
                    B::func(new_val);
                    new_val=new_val/9;
                }
                if(new_val%5==0)
                {
                    C::func(new_val);
                    new_val=new_val/25;
                }
                if(temp = new_val)
                    break;
                else
                    temp = new_val;
            }    
		}
		void check(int);
};



void D::check(int new_val)
{
    update_val(new_val);
    cout << "Value = " << val << endl << "A's func called " << getA() << " times " << endl << "B's func called " << getB() << " times" << endl << "C's func called " << getC() << " times" << endl;
}


int main()
{
    D d;
    int new_val;
    cin >> new_val;
    d.check(new_val);

}
