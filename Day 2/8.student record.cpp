#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    void input() {
        cout << "ENTER THE STUDENT NAME =>";
        cin >> name;
        cout << "ENTER THE REGISTER NUMBER =>";
        cin >> regno;
        cout << "MARK 1 => ";
        cin >> mark1;
        cout << "MARK 2 => ";
        cin >> mark2;
        cout << "MARK 3 => ";
        cin >> mark3;
    }
    void calculateAverage() {
        average = (mark1 + mark2 + mark3) / 3.0;
    }

    void displayGrade() {
        cout << "AVERAGE SCORE IS => " << average << endl;
        if (average > 90)
            cout << "S GRADE" << endl;
        else if (average > 80)
            cout << "A GRADE" << endl;
        else if (average > 70)
            cout << "C GRADE" << endl;
        else if (average > 60)
            cout << "D GRADE" << endl;
        else if (average >= 50)
            cout << "E GRADE" << endl;
        else
            cout << "F GRADE" << endl;
    }
private:
    string name;
    int regno;
    int mark1, mark2, mark3;
    float average;
};
int main() {
    int n;
    cout << "ENTER THE NUMBER OF STUDENT ENTRIES =>";
    cin >> n;
    Student students[10];
    for (int i = 0; i < n; ++i) {
        students[i].input();
        students[i].calculateAverage();
        students[i].displayGrade();
    }
    return 0;
}
