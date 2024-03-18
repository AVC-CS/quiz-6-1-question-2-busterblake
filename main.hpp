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
    file << num << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the ID, NAME, DEPARTMENT, and SALARY: ";
        cin >> id >> name >> department >> salary;
        file << id << " " << name << " " << department << " " << salary << endl;
    }
    file.close();
    return num;
}


int readFile(string filename)
{
    int num = 0;
    int number = 0;
    string id, name, department, salary;
    ifstream file;
    file.open(filename);
    file >> number;
    cout << number << endl;
    while (file >> id >> name >> department >> salary)
    {
        cout << id << " " << name << " " << department << " " << salary << endl;
        num++;
    }
    file.close();
    return num;
}

