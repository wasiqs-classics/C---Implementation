// question01.cpp

#include "question01.h"
#include <iostream>
using namespace std;

// personType class implementation

// Default constructor that initializes first and last names to empty strings.
personType::personType() : firstName(""), lastName("") {}

// Parameterized constructor that initializes first and last names.
personType::personType(string fName, string lName) : firstName(fName), lastName(lName) {}


// Sets the first and last names of the person.
void personType::setName(string fName, string lName) {
    firstName = fName;
    lastName = lName;
}

// Returns the first name of the person.
string personType::getFirstName() const {
    return firstName;
}

// Returns the last name of the person.
string personType::getLastName() const {
    return lastName;
}

// Prints the full name of the person.
void personType::printName() const {
    cout << firstName << " " << lastName << endl;
}

// doctorType class implementation

// Default constructor that initializes first name, last name, and specialty to default values.
doctorType::doctorType() : personType(), speciality("") {}

// Parameterized constructor that initializes first name, last name, and specialty.
doctorType::doctorType(string fName, string lName, string special) : personType(fName, lName), speciality(special) {}

// This Sets the specialty of the doctor.
void doctorType::setSpeciality(string special) {
    speciality = special;
}

// Returns the specialty of the doctor.
string doctorType::getSpeciality() const {
    return speciality;
}

// Prints the doctor's full name and specialty.
void doctorType::printDoctor() const {
    printName();
    cout << "Speciality: " << speciality << endl;
}

// billType class implementation

// Default constructor that initializes patient ID and charges to zero.
billType::billType() : patientID(0), pharmacyCharges(0), doctorFee(0), roomCharges(0) {}

// Parameterized constructor that initializes patient ID and charges.
billType::billType(int id, double pharmacy, double doctor, double room) 
    : patientID(id), pharmacyCharges(pharmacy), doctorFee(doctor), roomCharges(room) {}


// Sets the patient ID and charges.
void billType::setBill(int id, double pharmacy, double doctor, double room) {
    patientID = id;
    pharmacyCharges = pharmacy;
    doctorFee = doctor;
    roomCharges = room;
}

// Calculates and returns the total bill by summing all charges.
double billType::calculateTotalBill() const {
    return pharmacyCharges + doctorFee + roomCharges;
}

// Prints the patient ID, individual charges, and the total bill.
void billType::printBill() const {
    cout << "Patient ID: " << patientID << endl;
    cout << "Pharmacy Charges: Rs. " << pharmacyCharges << endl;
    cout << "Doctor's Fee: Rs. " << doctorFee << endl;
    cout << "Room Charges: Rs. " << roomCharges << endl;
    cout << "Total Bill: Rs. " << calculateTotalBill() << endl;
}

// patientType class implementation

// Default constructor that initializes patient details and inherits first and last names.
patientType::patientType() : personType(), patientID(0), age(0), dateOfBirth(""), admissionDate(""), dischargeDate(""), attendingPhysicianName("") {}

// Parameterized constructor that initializes patient details.
patientType::patientType(string fName, string lName, int id, int age, string dob, string admitDate, string dischargeDate, string doctor)
    : personType(fName, lName), patientID(id), age(age), dateOfBirth(dob), admissionDate(admitDate), dischargeDate(dischargeDate), attendingPhysicianName(doctor) {}

// Sets patient details such as ID, age, dates, and attending physician.
void patientType::setPatientInfo(int id, int age, string dob, string admitDate, string dischargeDate, string doctor) {
    patientID = id;
    this->age = age;
    dateOfBirth = dob;
    admissionDate = admitDate;
    dischargeDate = dischargeDate;
    attendingPhysicianName = doctor;
}

// Prints the patient's full details including ID, age, dates, and physician's name.
void patientType::printPatient() const {
    printName();
    cout << "Patient ID: " << patientID << endl;
    cout << "Age: " << age << endl;
    cout << "Date of Birth: " << dateOfBirth << endl;
    cout << "Admission Date: " << admissionDate << endl;
    cout << "Discharge Date: " << dischargeDate << endl;
    cout << "Attending Physician: " << attendingPhysicianName << endl;
}
