#include<iostream>
using namespace std;
class Date
{
    private:
    int d,m,y;
    public:
    Date()
    {
        d=0;
        m=0;
        y=0;
    }
    void setdata(int x,int l,double z)
    {
        d=x;
        m=l;
        y=z;
    }
   void getdata()
   {
    cout<<d<<"/"<<m<<"/"<<y;
   }
};
int main()
{
    Date d1,d2;
    d1.setdata(5,9,2012);
    d1.getdata();
}