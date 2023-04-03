#include<iostream>
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    Complex add(Complex C)
    {
        Complex t;
        t.a=a+C.a;
        t.b=b+C.b;
        return t;
    }
    void showdata()
    {

        cout<<a<<"+"<<b<<"i";
    }
};
int main()
    {
        Complex c1,c2,c3;
        c1.setdata(2,5);
        c2.setdata(2,5);
        c3=c1.add(c2);
        c3.showdata();
    }
