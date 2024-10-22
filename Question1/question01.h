// question01.h

#ifndef QUESTION01_H
#define QUESTION01_H

#include <string>
using namespace std;

class personType {
protected:
    string firstName;
    string lastName;

public:
    personType();
    personType(string fName, string lName);
    void setName(string fName, string lName);
    string getFirstName() const;
    string getLastName() const;
    void printName() const;
};

class doctorType : public personType {
private:
    string speciality;

public:
    doctorType();
    doctorType(string fName, string lName, string special);
    void setSpeciality(string special);
    string getSpeciality() const;
    void printDoctor() const;
};

class billType {
private:
    int patientID;
    double pharmacyCharges;
    double doctorFee;
    double roomCharges;

public:
    billType();
    billType(int id, double pharmacy, double doctor, double room);
    void setBill(int id, double pharmacy, double doctor, double room);
    double calculateTotalBill() const;
    void printBill() const;
};

class patientType : public personType {
private:
    int patientID;
    int age;
    string dateOfBirth;
    string admissionDate;
    string dischargeDate;
    string attendingPhysicianName;

public:
    patientType();
    patientType(string fName, string lName, int id, int age, string dob, string admitDate, string dischargeDate, string doctor);
    void setPatientInfo(int id, int age, string dob, string admitDate, string dischargeDate, string doctor);
    void printPatient() const;
};

#endif
