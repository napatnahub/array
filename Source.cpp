#include <iostream>
#include<string>
using namespace std;
void ListStudent(int student, string name[30], int point[30]);
char Calgrade(int point[30], int student);
int main()
{
	int student;
	int point[30];
	string name[30];
	cout << "Number of student:";
	cin >> student;
	for (int i = 0; i < student; i++)
	{
		cout << "Enter name:";
		cin >> name[i];
		cout << "Enter point:";
		cin >> point[i];
	}
	ListStudent(student, name, point);
	return 0;

}
void ListStudent(int student, string name[30], int point[30])
{

	for (int i = 0; i <student; i++)
	{

		cout << "student Name:" << name[i] << " score" << i << "=" << point[i] << " Your grade is"  << endl;

	}
	Calgrade(point, student)
}
char Calgrade(int score[30], int student)
{
	char grade;
	for (int i = 0; i < student; i++){
		if (score[i] >= 80 && score[i] <= 100){
			grade = 'A';
			cout << grade;
		}
		else if (score[i] >= 70 && score[i] <= 79){
			grade = 'B';
			cout << grade;
		}
		else if (score[i] >= 60 && score[i] <= 69){
			grade = 'C';
			cout << grade;
		}
		else if (score[i] >= 50 && score[i] <= 59){
			grade = 'D';
			cout << grade;
		}

	}
	return(grade);
}