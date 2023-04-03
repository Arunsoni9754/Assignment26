#include<iostream>
using namespace std;
class Counter
{
    
    public:
    static int a;
    Counter()
    {
       a++; 
    }
    void count()
    {
        
        cout<<"No. of time comstructor called is "<<a;
    }

};
int Counter::a;//static banaya isliye yeh lagaya hai
int main()
{
    Counter c1,c2;
    c1.count();

}
/*another method
class Counter
{
    private:
    int a;
    public:
    Counter()
    {
        a=0;
    }
    void count()
    {
        a++;
    }
    void display()
    {
        cout<<a;
    }

};
int main()
{
    Counter c1;
    c1.count();
    c1.display;
}*/