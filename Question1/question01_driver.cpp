// question01_driver.cpp

#include "question01.h"
#include <iostream>
using namespace std;

int main() {
    // Create a doctor
    doctorType doctor("Dr. Anis", "Ahmed", "Cardiology");
    doctor.printDoctor();

    // Create a patient
    patientType patient("Iqbal", "Khan", 12345, 30, "01/01/1994", "10/10/2024", "15/10/2024", doctor.getFirstName() + " " + doctor.getLastName());
    patient.printPatient();

    // Create a bill
    billType bill(12345, 150.50, 500.00, 250.00);
    bill.printBill();

    return 0;
}
