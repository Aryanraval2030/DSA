#include <iostream>
#include <vector>
using namespace std;

class Student
{
public:
    int id;
    string name;
    static int autoId;

    Student(string name)
    {
        id = autoId++;
        this->name = name;
    }

    void display()
    {
        cout << "----------------------" << endl;
        cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "----------------------" << endl;
    }
};

int Student::autoId = 1;

int main()
{
    vector<Student> students;

    int choice;

    do
    {
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Remove Student by ID" << endl;
        cout << "4. Search Student by ID" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string name;
            cout << "Enter Student Name: ";
            cin >> name;

            students.push_back(Student(name));
            cout << "Student Added Successfully." << endl;
            break;
        }

        case 2:
        {
            if (students.empty())
            {
                cout << "No Students Found." << endl;
            }
            else
            {
                for (int i = 0; i < students.size(); i++)
                {
                    students[i].display();
                }
            }
            break;
        }

        case 3:
        {
            int id;
            cout << "Enter ID to Remove: ";
            cin >> id;

            bool found = false;

            for (int i = 0; i < students.size(); i++)
            {
                if (students[i].id == id)
                {
                    students.erase(students.begin() + i);
                    cout << "Student Removed Successfully." << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Student Not Found." << endl;
            }

            break;
        }

        case 4:
        {
            int id;
            cout << "Enter ID to Search: ";
            cin >> id;

            bool found = false;

            for (int i = 0; i < students.size(); i++)
            {
                if (students[i].id == id)
                {
                    students[i].display();
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Student Not Found." << endl;
            }

            break;
        }

        default:
        {
            cout << "Invalid Choice." << endl;
        }
        }

    } while (choice != 5);

    return 0;
}