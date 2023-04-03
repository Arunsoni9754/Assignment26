#include<iostream>
using namespace std;
class Time
{
    private:
    int h,m,s;
    public:
    void setTime(int a,int b,int c)
    {
        h=a;
        m=b;
        s=c;
    }
    void showTime()
    {
        cout<<h<<" hrs "<<m<<" mins "<<s<<" sec";
    }
    void normalize()
    { int n,l;
        if(m>=60)
        {
            n=m/60;
            m=m%60;
            h+=n;
        }  
        if(s>=60)
        {
            l=m/60;
            s=s%60;
            m+=l;
        }
    }
    Time add(Time T)
    {
        Time t1;
        t1.h=T.h+h;
        t1.m=T.m+m;
        t1.s=T.s+s;
        return t1;
    }
};
int main()
{
    Time t1,t2,t3;
    t1.setTime(4,65,90);
    t1.normalize();
    t1.showTime();
        cout<<endl;

    t2.setTime(4,100,80);
    
    t2.normalize();
    t2.showTime();
            cout<<endl;
    t3=t1.add(t2);
    t3.normalize();
    t3.showTime();
}