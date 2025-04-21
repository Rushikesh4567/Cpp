// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
class Student
{
    private:
        int marks;
        int roll_no;
        string name;
        
    public:
        void getdetails(int r,int m,string n)
        {
            roll_no=r;
            marks=m;
            name=n;
        }
        
        void putdetails()       //displaying the details of a student
        {
            cout<<"\nThe name of student is "<<name
                <<"\nThe roll number of student is "<<roll_no<<endl
                <<"Marks of student is "<<marks;
        }
};
int main() 
{
    Student s1;
    s1.getdetails(1,99,"jatin");
    s1.putdetails();

    return 0;
}
