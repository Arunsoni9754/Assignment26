#include<iostream>
using namespace std;
class Bank
{
    private:
    double principle,roi,year;
    public:
    Bank(double x,double y,double z)
    {
        principle=x;
        roi=y;
        year=z;
    }
    void SI()
    {
        cout<<"the Simple interest is "<<principle*roi*year/100;
    }
};
int main()
{ double j,k,l;
    Bank b1(10,10,10);
    b1.SI();
    cout<<endl;
    cout<<"Enter the princple amout in rupees ";
    cin>>j;   
    cout<<"Enter the rate of interest ";
    cin>>k;   
    cout<<"Enter the time in years ";
    cin>>l;    cout<<endl;
    Bank b2(j,k,l);
    b2.SI();
}