#include <iostream>

using namespace std;

class Human {
public:
	string name;
	int age;
	void HumanParametrs() {
		cout << "\nName is " << flush;
		cin >> name;
		cout << "Age is " << flush;
		cin >> age;

	}
	void changename() {
		cout << "New name is : " << flush;
		cin >> name;

	}


};
class student : public Human {
private:
	string VNZ;
	int a, b, c, d, e, g;
	float f;
public:
	student() {
		VNZ = "NUWM";
		cout << "Student's VNZ is " << VNZ;
		a = 3;
		b = 4;
		c = 2;
		d = 4;
		e = 5;
		g = 0;
	}
	void markslist() {
		cout << "Current student's marks are : " << endl;
		cout << "1. " << flush;
		cout << a;
		cout << "\n2. " << flush;
		cout << b;
		cout << "\n3. " << flush;
		cout << c;
		cout << "\n4. " << flush;
		cout << d;
		cout << "\n5. " << flush;
		cout << e;
		cout << endl;

	}
	void addNewmark() {
		cout << "New mark: " << flush;
		cin >> g;
	}
	void changemarks() {
		cout << "Change marks : " << endl;
		cout << "1. " << flush;
		cin >> a;
		cout << "\n2. " << flush;
		cin >> b;
		cout << "\n3. " << flush;
		cin >> c;
		cout << "\n4. " << flush;
		cin >> d;
		cout << "\n5. " << flush;
		cin >> e;
		cout << endl;
	}
	void SerArif() {
		if (g != 0) {
			f = (a + b + c + d + e + g) / 6;
		}
		f = (a + b + c + d + e) / 5;
		cout << "Average mark is : " << f << endl;

	}

};
int main() {
	Human ordinaryhuman;
	ordinaryhuman.HumanParametrs();
	ordinaryhuman.changename();
	student Student;
	Student.HumanParametrs();
	Student.markslist();
	Student.SerArif();
	Student.changemarks();
	Student.addNewmark();
	Student.SerArif();
}