#ifndef TASK2_ELECTRICITYBILL_H
#define TASK2_ELECTRICITYBILL_H

#include "Customer_Rgistration.h"

#include <iostream>
#include <ctime>

class ElectricityBill {
private:
    Customer m_customer;
    std::string m_billDate;
    double m_consumption;
    double m_rateperunit;
public:
    ElectricityBill(const Customer& customer, double cons, double rate) :
    m_consumption(cons),
    m_rateperunit(rate),
    m_customer(customer)
    {
        time_t now = time(nullptr);
        m_billDate = ctime(&now);
    }
public:
    const Customer get_Customer() const {
        return m_customer;
    }
    std::string get_billdate() const {
        return m_billDate;
    }
    double getTotalAmount() const {
        return m_consumption * m_rateperunit;
    }
    double get_consumption() const {
        return m_consumption;
    }
    double get_rateperunit() const {
        return m_rateperunit;
    }
};

#endif //TASK2_ELECTRICITYBILL_H
