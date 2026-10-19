

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Student
{
private:
    string name;
    string birthDate;
    string phone;
    string city;
    string country;
    string school;
    int group;

public:
    Student() : group(0) {}

    void input()
    {
        cout << "Имя: ";
        getline(cin, name);

        cout << "Дата рождения: ";
        getline(cin, birthDate);

        cout << "Телефон: ";
        getline(cin, phone);

        cout << "Город: ";
        getline(cin, city);

        cout << "Страна: ";
        getline(cin, country);

        cout << "Учебное заведение: ";
        getline(cin, school);

        cout << "Номер группы: ";
        cin >> group;
    }

    void print()
    {
        cout << "\nДанные студента:" << endl;
        cout << "Имя: " << name << endl;
        cout << "Дата рождения: " << birthDate << endl;
        cout << "Телефон: " << phone << endl;
        cout << "Город: " << city << endl;
        cout << "Страна: " << country << endl;
        cout << "Учебное заведение: " << school << endl;
        cout << "Группа: " << group << endl;
    }

    string getName() { return name; }
    string getBirthDate() { return birthDate; }
    string getPhone() { return phone; }
    string getCity() { return city; }
    string getCountry() { return country; }
    string getSchool() { return school; }
    int getGroup() { return group; }

    void setName(string value) { name = value; }
    void setBirthDate(string value) { birthDate = value; }
    void setPhone(string value) { phone = value; }
    void setCity(string value) { city = value; }
    void setCountry(string value) { country = value; }
    void setSchool(string value) { school = value; }

    void setGroup(int value)
    {
        if (value > 0)
            group = value;
    }
};

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    Student student;

    student.input();
    student.print();

    cout << "\nИмя через getter: "
        << student.getName() << endl;

    student.setGroup(25);

    cout << "Новая группа: "
        << student.getGroup() << endl;

    return 0;
}
