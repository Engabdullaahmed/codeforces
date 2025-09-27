#include <bits/stdc++.h>
using namespace std;
#define ll long long

string Employee[100];
int age[100];
int salary[100];
string male_female[100];
int curr = 0;
void Add_new()
{
    cout << "Enter name:" << endl;
    string s;
    cin >> s;
    cout << "Enter age:" << endl;
    int w;
    cin >> w;
    cout << "Enter Salary" << endl;
    int se;
    cin >> se;
    cout << "Enter gender (m/f):" << endl;
    char c;
    cin >> c;
    Employee[curr] = s;
    age[curr] = w;
    salary[curr] = se;
    male_female[curr] = c;
    curr++;
}
void print_Employee()
{
    for (int i = 0; i < curr; i++)
    {
        cout << Employee[i] << " " << age[i] << " " << salary[i] << " " << male_female[i] << " ";
        cout << endl;
    }
}
void delete_age()
{
    cout << "Enter start and end age";
    int start, end;
    cin >> start >> end;
    for (int i = 0; i < curr;)
    {
        if (age[i] >= start && age[i] <= end)
        {

            for (int j = i; j < curr - 1; j++)
            {
                Employee[j] = Employee[j + 1];
                age[j] = age[j + 1];
                salary[j] = salary[j + 1];
                male_female[j] = male_female[j + 1];
            }
            curr--;
        }
        else
        {
            i++;
        }
    }
    cout << "success we delete it " << endl;
}

void update_salary_name()
{
    string name;
    int salaryy;

    cout << "enter name and salary";
    cin >> name >> salaryy;
    bool flage = true;
    for (int i = 0; i < curr; i++)
    {
        if (name == Employee[i])
        {
            salary[i] = salaryy;
            flage = true;
            break;
        }
        else
        {
            flage = false;
        }
    }
    if (flage == false)
    {
        cout << "NO emple fount " << endl;
    }
    else
    {
        cout << "upeate succes :)" << endl;
    }
}

int main()
{

    while (true)
    {

        cout << "Enter your choice:" << endl;
        cout << "1) Add new employee" << endl;
        cout << "2)print all employees" << endl;
        cout << "3)Delete by age" << endl;
        cout << "4)Update Salary by name" << endl;
        int x;
        cin >> x;

        if (x >= 1 && x <= 4)
        {
            if (x == 1)
            {
                Add_new();
            }
            else if (x == 2)
            {
                print_Employee();
            }
            else if (x == 3)
            {
                delete_age();
            }
            else
            {
                update_salary_name();
            }
        }
        else
        {
            cout << "You Enter in valide number please enter number between 1 to 4 " << endl;
        }
        cout << "if you want exit please enter -1 :( if not enter any another number ";
        int m;
        cin >> m;
        if (m == -1)
        {
            break;
        }
        else
        {
            continue;
        }
    }

    return 0;
}
