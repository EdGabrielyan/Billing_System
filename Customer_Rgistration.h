#ifndef TASK2_CUSTOMER_RGISTRATION_H
#define TASK2_CUSTOMER_RGISTRATION_H

#include <iostream>

class Customer {
private:
    std::string m_name;
    std::string m_info;
    std::string m_meterNumber;
public:
    Customer(const std::string& name, const std::string& info, const std::string& meterNumber) :
    m_name(name),
    m_info(info),
    m_meterNumber(meterNumber) {}
public:
    const std::string &get_name() const {
        return m_name;
    }
    const std::string &get_info() const {
        return m_info;
    }
    const std::string & get_meterNumber() const {
        return m_meterNumber;
    }
};

#endif //TASK2_CUSTOMER_RGISTRATION_H
