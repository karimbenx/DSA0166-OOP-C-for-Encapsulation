#include <iostream>
#include <string>
using namespace std;
class Patient {
protected:
    string name;
    int bedNumber;
    string wardName;
    float dues;
public:
    void getDetails() {
        cout << "Enter Patient Name: ";
        cin >> name;
        cout << "Enter Bed Number: ";
        cin >> bedNumber;
        cout << "Enter Ward Name: ";
        cin >> wardName;
        cout << "Enter Dues of Patient: ";
        cin >> dues;
    }
    void displayDetails() {
        cout << "Patient Name: " << name << endl;
        cout << "Bed Number: " << bedNumber << endl;
        cout << "Ward Name: " << wardName << endl;
        cout << "Total Dues of Patient: " << dues << endl;
    }
};
class Doctor {
protected:
    string docName;
    string docDegree;
public:
    void getDoctorDetails() {
        cout << "Enter the Doctor Name: ";
        cin >> docName;
        cout << "Enter Doctorate Degree: ";
        cin >> docDegree;
    }
    void displayDoctorDetails() {
        cout << "Doctor Name: " << docName << endl;
        cout << "Doctorate Degree: " << docDegree << endl;
    }
};
class PatientDetails : public Patient, public Doctor {
public:
    void displayAllDetails() {
        displayDetails();
        displayDoctorDetails();
    }
};
int main() {
    PatientDetails patient;
    patient.getDetails();
    patient.getDoctorDetails();
    cout << "Inserted Data is:" << endl;
    patient.displayAllDetails();
    return 0;
}
