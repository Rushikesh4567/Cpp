#include <iostream>
using namespace std;

class Employee 
{
private:
    int empID;
    double salary;

public:
    Employee(int id, double initialSalary) 
	{
        empID = id;
        if (initialSalary > 0) 
		{
            salary = initialSalary;
        }
		else 
		{
            salary = 0;
            cout << "Invalid salary! Setting salary to 0." << endl;
        }
    }

    
    int getEmpID() 
	{
        return empID;
    }

    double getSalary() 
	{
        return salary;
    }

    // Setter Function
    void setSalary(double newSalary)
	{
        if (newSalary > 0) 
		{
            salary = newSalary;
        }
		else
		{
            cout << "\nInvalid salary! Salary must be greater than 0.\n" << endl;
        }
    }

    
    ~Employee()
	{
        cout << "Employee record deleted for ID: " << empID << endl;
    }
};

int main() 
{
    Employee emp1(101, 50000);

    cout << "Employee ID: " << emp1.getEmpID() << endl;
    cout << "Initial Salary: " << emp1.getSalary() << endl;

    
    emp1.setSalary(55000);
    cout << "Updated Salary: " << emp1.getSalary() << endl;


    emp1.setSalary(-10000);

    return 0;
}

