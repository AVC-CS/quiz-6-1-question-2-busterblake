// You should remake this program with the following functions in the main.hpp

// writeFile( ) :

// Ask for the number of Employees.

// Ask for Employee information(id, name, department, salary) to the User.

// Write it into the file "employee.txt".

// Return the number of Employee

// 3
// 10981011  John Computer 100000 
// 10981012  Johny Network 110000 
// 10981013  Johnn HR 90000 
 

// readFile( ) 

// Read all lines from the file. Print out the employee information.

// Return the number of employee.

// int main()
// {

//     string filename;
//     int empN;

//     filename = "employee.txt";
//     empN = writeFile(filename);
//     cout << "File created with " << empN << " employee records\n";

//     empN = readFile(filename);
//     cout << "The total number of employess read " << empN << endl;
// }


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int writeFile(string filename);
int readFile(string filename);

int writeFile(string filename)
{
    int num;
    string id, name, department, salary;
    ofstream file;
    file.open(filename);
    cout << "Enter the number of employees: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the id, name, department, and salary of the employee: ";
        cin >> id >> name >> department >> salary;
        file << id << " " << name << " " << department << " " << salary << endl;
    }
    file.close();
    return num;
}


int readFile(string filename)
{
    int num = 0;
    string id, name, department, salary;
    ifstream file;
    file.open(filename);
    while (file >> id >> name >> department >> salary)
    {
        cout << "Id: " << id << " Name: " << name << " Department: " << department << " Salary: " << salary << endl;
        num++;
    }
    file.close();
    return num;
}

