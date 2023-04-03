#include<iostream>
using namespace std;
class Box
{
    private:
    int l,b,h;
    public:
    Box(int x,int y,int z)
    {
        l=x;
        b=y;
        h=z;
    }
    void volume(){
        cout<<"THe volume is "<<l*b*h;
    }
};
int main()
{int j,k,l;
    Box b1(3,4,5);
    b1.volume();
    cout<<endl;
    cin>>j>>k>>l;
    Box b2(j,k,l);
    b2.volume();
    return 0;
}