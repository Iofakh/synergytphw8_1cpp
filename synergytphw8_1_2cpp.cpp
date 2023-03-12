#include <iostream>
#include <string>

using namespace std;

class Person {
private:
  string name;
  int age;
  char gender;
  float weight;

public:
  Person(string n, int a, char g, float w) {
    name = n;
    age = a;
    gender = g;
    weight = w;
  }

  string getName() { return name; }
  void setName(string n) { name = n; }

  void setAge(int a) { age = a; }
  int getAge() { return age; }

  float getWeight() { return weight; }
  void setWeight(float w) { weight = w; }
};

class Pass {
private:
  string type;

public:
  Pass(string t) { type = t; }

  string getType() { return type; }
  void setType(string t) { type = t; }
};

class Student : public Person {
private:
  int yearOfStudy;
  Pass pass;

public:
  Student(string n, int a, char g, float w, int y, Pass p)
      : Person(n, a, g, w), pass(p) {
    yearOfStudy = y;
  }

  int getYearOfStudy() { return yearOfStudy; }
  void setYearOfStudy(int y) { yearOfStudy = y; }

  Pass getPass() { return pass; }
  void setPass(Pass p) { pass = p; }
};

class Employee : public Person {
private:
  string position;
  Pass pass;

public:
  Employee(string n, int a, char g, float w, string p, Pass ps)
      : Person(n, a, g, w), position(p), pass(ps) {}

  string getPosition() { return position; }
  void setPosition(string p) { position = p; }

  Pass getPass() { return pass; }
  void setPass(Pass p) { pass = p; }
};

int main() {

  Student student("Иванов Иван", 20, 'm', 70.5, 2021, Pass("Студенческий"));
  Employee employee("Петров Петр", 35, 'm', 85.2, "654321",
                    Pass("Сотруднический"));
  student.setAge(21);
  student.setWeight(72.5);

  employee.setAge(36);
  employee.setWeight(86.2);




  cout << "Студент " << student.getName() << " имеет пропуск типа \""
       << student.getPass().getType() << "\" для доступа в корпус \"";

  cout << "Сотрудник " << employee.getName() << " имеет пропуск типа \""
       << employee.getPass().getType() << "\" для доступа в корпус \"";

  return 0;
}