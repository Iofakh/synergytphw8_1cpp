#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;
    string gender;
    float weight;

public:

    Person(string n, int a, string g, float w)
    {
        name = n;
        age = a;
        gender = g;
        weight = w;
    }

    string getName()
    {
        return name;
    }
    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        age = a;
    }
    int getAge()
    {
        return age;
    }

    string getGender()
    {
        return gender;
    }
    void setGender(string g)
    {
        gender = g;
    }

    float getWeight()
    {
        return weight;
    }
    void setWeight(float w)
    {
        weight = w;
    }
};

class Student : public Person
{
private:
    int yearOfStudy;
    string faculty;
    string group;

public:


    Student(string n, int a, string g, float w, int y, string f, string gr) : Person(n, a, g, w)
    {
        yearOfStudy = y;
        faculty = f;
        group = gr;
    }


    int getYearOfStudy()
    {
        return yearOfStudy;
    }
    void setYearOfStudy(int y)
    {
        yearOfStudy = y;
    }

    string getFaculty()
    {
        return faculty;
    }
    void setFaculty(string f)
    {
        faculty = f;
    }

    string getGroup()
    {
        return group;
    }
    void setGroup(string gr)
    {
        group = gr;
    }

};

int main()
{

    Student student("Ivan", 20, "Male", 75.5, 2022, "Programming", "VБОз-42210МОрпо");


    student.setYearOfStudy(3);

    student.setName("Petr");


    cout << "Name: " << student.getName() << endl;
    cout << "Age: " << student.getAge() << endl;
    cout << "Gender: " << student.getGender() << endl;
    cout << "Weight: " << student.getWeight() << endl;
    cout << "Year of study: " << student.getYearOfStudy() << endl;
    cout << "Faculty: " << student.getFaculty() << endl;
    cout << "Group: " << student.getGroup() << endl;

    return 1;
}