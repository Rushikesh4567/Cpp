#include<iostream>

using namespace std;

class Student{
	private:
		int marks;
		string name;
		
	public:
		string getName()
		{
			return name;
		}
		
		int getMarks()
		{
			return marks;
		}
		
		void setMarks(int studentMarks)
		{
			if(studentMarks>=0&&studentMarks<=100)
			{
				marks=studentMarks;
			}
			else
			{
				cout<<"Invalid marks. Please enter marks between 0 and 100.\n"<<endl;
			}
		}
		
		Student(string studentName,int newMarks)
		{
			cout<<"constructor with parameter is called\n"<<endl;
			name=studentName;
			if(newMarks>=0&&newMarks<=100)
			{
				marks=newMarks;
			}
			else
			{
				cout<<"Invalid marks. Please enter marks between 0 and 100.\n"<<endl;
			}
		}
		
		~Student()
		{
			cout<<"Destructor is called\n";
			cout<<"Student record is deleted";
		}
	
};
int main()
{
	Student s1("Rushikesh",88);
	
	cout << "Student Name: " << s1.getName() << endl;
    cout << "Initial Marks: " << s1.getMarks() << endl;

    s1.setMarks(90);
    cout << "Updated Marks: " << s1.getMarks() << endl;

	int s;
	cout<<"Enter marks ";
	cin>>s;
    s1.setMarks(s);
}
