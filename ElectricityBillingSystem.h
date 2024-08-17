#ifndef TASK2_ELECTRICITYBILLINGSYSTEM_H
#define TASK2_ELECTRICITYBILLINGSYSTEM_H

#include <iostream>
#include <fstream>

#include "Customer_Rgistration.h"
#include "ElectricityBill.h"


class ElectricityBillingsystem {
private:
    double m_rateperunit;
public:
    ElectricityBillingsystem(double rate) : m_rateperunit(rate) {}
public:
    void generateBill(const Customer& customer, double consumption) {
        ElectricityBill bill(customer, consumption, m_rateperunit);
        std::cout << "Electricity Bill: " << std::endl;
        std::cout << "-------------------" << std::endl;
        std::cout << "Customer name: " << bill.get_Customer().get_name() << std::endl;
        std::cout << "Contact info: " << bill.get_Customer().get_info() << std::endl;
        std::cout << "Meter Number: " << bill.get_Customer().get_meterNumber() << std::endl;
        std::cout << "Bill Date: " << bill.get_billdate() << std::endl;
        std::cout << "Consumption: " << bill.get_consumption() << std::endl;
        std::cout << "Rate per unit: $" << bill.get_rateperunit() << std::endl;
        std::cout << "Total amount: $" << bill.getTotalAmount() << std::endl;
    }
    void saveBillToFile(const ElectricityBill& bill) {
        std::string filename = bill.get_Customer().get_name() + bill.get_billdate() + ".txt";
        std::ofstream file(filename);
        if(file.is_open()) {
            file << "Electricity Bill" << std::endl;
            file << "----------------" << std::endl;
            file << "Customer Name: " << bill.get_Customer().get_name() << std::endl;
            file << "Contact Info: " << bill.get_Customer().get_info() << std::endl;
            file << "Meter Number: " << bill.get_Customer().get_meterNumber() << std::endl;
            file << "Bill Date: " << bill.get_billdate();
            file << "Consumption: " << bill.get_consumption() << " units" << std::endl;
            file << "Rate per Unit: $" << bill.get_rateperunit() << std::endl;
            file << "Total Amount Due: $" << bill.getTotalAmount() << std::endl;
            file.close();
            std::cout << "Bill saved to file: " << filename << std::endl;
        } else {
            std::cout << "Unable to open the file for saving the bill." << std::endl;
        }
    }
};

#endif //TASK2_ELECTRICITYBILLINGSYSTEM_H
