#include<iostream>
using namespace std;
class staticCount
{
    private:  
    static int a;

    public:
    static void set(int z)
    {
        a=z;
    }
    static void increase()
    {
        a++;
    }
   static void display()
    {
        cout<<a;
    }
};
int staticCount::a;
int main()
{ static int a; 
    staticCount::set(a);
    staticCount::increase();
    staticCount::increase();
    staticCount::increase();
    staticCount::display();
    return 0;
}