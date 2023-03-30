#include <iostream>
#include <string>
using namespace std;

string convertScore(int score) {
	string grade;
	switch (score / 10) {
	case 10:
	case 9:
		grade = "A";
		break;
	case 8:
		grade = "B";
		break;
	case 7:
		grade = "C";
		break;
	case 6:
		grade = "D";
		break;
	default:
		grade = "E";
	}
	return grade;
}

void outputResult(int score) {
	string grade, isPass;
	grade = convertScore(score);

	isPass = (score >= 60) ? "及格" : "不及格";
	cout << "分數為: " << score << endl;
	cout << "等第為: " << grade << endl;
	cout << "是否及格: " << isPass << endl;
}

int main()
{
	int score;
	//string grade;
	//string isPass;
	cout << "請輸入一個分數: ";
	cin >> score;

	//if (score >= 90) {
	//    grade = "A";
	//}
	//else if (score >= 80) {
	//    grade = "B";
	//}
	//else if (score >= 70) {
	//    grade = "C";
	//}
	//else if (score >= 60) {
	//    grade = "D";
	//}
	//else {
	//    grade = "E";
	//}



	//if (score >= 60) isPass = "及格";
	//else isPass = "不及格";

	outputResult(score);
}