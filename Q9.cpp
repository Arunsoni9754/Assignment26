#include<iostream>
using namespace std;
class Bill
{
    private:
    double m;
    public:
   void  get()
    {
        double j,k;
        cout<<"Enter the meter Number ";
        cin>>j;
        cout<<"Enter the number of Units: ";
        cin>>k;
        m=k;
    }
  void  calulateBill()
  {
    if(m>=0&&m<=100)
    {
        cout<<m*1.20;
    } 
    else  if(m>100&&m<=200)
    {
        cout<<m*2;
    } 
    else
    {
        cout<<m*3;
    }
  }
    
};
int main()
{ 
    Bill b1;
    b1.get();
    b1.calulateBill();
    return 0;
}