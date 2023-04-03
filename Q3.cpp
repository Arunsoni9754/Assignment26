#include<iostream>
using namespace std;
class Cube
{
private:
  int a;
    public:
   
    Cube()
    { int s;
        cin>>s;
        a=s;
    }
    void volume()
    {
        cout<<"The volume of cube is "<<(a*a*a);
    }
};
int main()
{
    Cube c1;
    cout<<"Enter the length of side of cube";
    c1.volume();
   
    
}