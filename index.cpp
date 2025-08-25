#include<iostream>
#include<string>

using namespace std;

int i = 0;

struct student
{
    int id;
    float marks, per;
    string name, grade;
} s[25];

void insert()
{
    system("cls");
    cout << "\n\n\t\t\t *** INSERT RECORD ***";
    cout << "\n\n Enter Student Id: ";
    cin >> s[i].id;
    cout << "\n\n Enter Student Name: ";
    cin >> s[i].name;
    cout << "\n\n Enter Student Marks: ";
    cin >> s[i].marks;
    s[i].per = (s[i].marks / 100) * 100;
    if (s[i].per >= 85)
        s[i].grade = "A+";
    else if (s[i].per >= 75)
        s[i].grade = "A";
    else if (s[i].per >= 65)
        s[i].grade = "B+";
    else if (s[i].per >= 55)
        s[i].grade = "B";
    else if (s[i].per >= 50)
        s[i].grade = "C";
    else if (s[i].per >= 45)
        s[i].grade = "D";
    else if (s[i].per >= 33)
        s[i].grade = "E";
    else
        s[i].grade = "F";
    i++;
    cout << "\n\n *** Insert Record Successfully ***";
}

void search()
{
    system("cls");
    cout << "\n\n\t\t\t *** Search Record ***";
    if (i == 0)
        cout << "\n\n *** No Record Found ***";
    else
    {
        int id, found = 0;
        cout << "\n\n Enter Student Id: ";
        cin >> id;
        for (int a = 0; a < i; a++)
        {
            if (id == s[a].id)
            {
                cout << "\n\n Name: " << s[a].name;
                cout << "\n\n Marks: " << s[a].marks;
                cout << "\n\n Percentage: " << s[a].per << "%";
                cout << "\n\n Grade: " << s[a].grade;
                found++;
            }
        }
        if (found == 0)
            cout << "\n\n *** Student Id Not found ***";
    }
}

void update()
{
    system("cls");
    cout << "\n\n\t\t\t *** Update Record ***";
    if (i == 0)
        cout << "\n\n *** No Record Found ***";
    else
    {
        int id, found = 0;
        cout << "\n\n Enter Student Id: ";
        cin >> id;
        for (int a = 0; a < i; a++)
        {
            if (id == s[a].id)
            {
                cout << "\n\n Enter Student Name: ";
                cin >> s[a].name;
                cout << "\n\n Enter Student Marks: ";
                cin >> s[a].marks;
                s[a].per = (s[a].marks / 100) * 100;
                if (s[a].per >= 85)
                    s[a].grade = "A+";
                else if (s[a].per >= 75)
                    s[a].grade = "A";
                else if (s[a].per >= 65)
                    s[a].grade = "B+";
                else if (s[a].per >= 55)
                    s[a].grade = "B";
                else if (s[a].per >= 50)
                    s[a].grade = "C";
                else if (s[a].per >= 45)
                    s[a].grade = "D";
                else if (s[a].per >= 33)
                    s[a].grade = "E";
                else
                    s[a].grade = "F";
                cout << "\n\n *** Update Record Successfully ***";
                found++;
            }
        }
        if (found == 0)
            cout << "\n\n *** Student Id Not found ***";
    }
}

void del()
{
    system("cls");
    cout << "\n\n\t\t\t *** Delete Record ***";
    if (i == 0)
        cout << "\n\n *** No Record Found ***";
    else
    {
        int id, found = 0;
        cout << "\n\n Enter Student Id: ";
        cin >> id;
        for (int a = 0; a < i; a++)
        {
            if (id == s[a].id)
            {
                for (int m = a; m < i; m++)
                {
                    s[m] = s[m + 1];
                }
                cout << "\n\n *** Delete Record Successfully ***";
                found++;
                i--;
                break;
            }
        }
        if (found == 0)
            cout << "\n\n *** Student Id Not found ***";
    }
}

void show()
{
    system("cls");
    cout << "\n\n\t\t\t *** Show All Record ***";
    if (i == 0)
        cout << "\n\n *** No Record Found ***";
    else
    {
        for (int a = 0; a < i; a++)
        {
            cout << "\n\n Student Id: " << s[a].id;
            cout << "\n\n Name: " << s[a].name;
            cout << "\n\n Marks: " << s[a].marks;
            cout << "\n\n Percentage: " << s[a].per << "%";
            cout << "\n\n Grade: " << s[a].grade;
            cout << "\n\n ********************************";
        }
    }
}

int main()
{
    p:
    system("cls");
    while (1){
        int choice;
        cout << "\n\n\t\t\t*** STUDENT MANAGEMENT SYSTEM ***";
        cout << "\n\n 1. INSERT RECORD";
        cout << "\n\n 2. SEARCH RECORD";
        cout << "\n\n 3. UPDATE RECORD";
        cout << "\n\n 4. DELETE RECORD";
        cout << "\n\n 5. SHOW RECORD";
        cout << "\n\n 6. EXIT";
        cout << "\n\n ENTER YOUR CHOICE ->";
        cin >> choice;
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            search();
            break;
        case 3:
            update();
            break;
        case 4:
            del();
            break;
        case 5:
            show();
            break;
        case 6:
            exit(0);
        default:
            cout << "\n\n *** Invalid Choice ***";
        }
    }
    return 0;
}
