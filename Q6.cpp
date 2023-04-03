#include<iostream>
#include<string.h>
using namespace std;
class student
{
    private:
    int marks,roll;
    char grade;
    public:
    char name[20]; 
    student(int m,int r,char n[],char g)
    { int i;
        marks=m;
        roll=r;
        strcpy(name,n);
        grade=g;
    }
    void details()
    {
        cout<<"roll no. is "<<roll<<endl;
        cout<<"name is "<<name<<endl;
        cout<<"Total marks is "<<marks<<endl;
        cout<<"grade is "<<grade<<endl;
    }
};
int main()
{
    char s[20]="Arun Soni";
   student s1(468,20,s,'A');
   s1.details();
   
   

}