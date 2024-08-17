#include "Customer_Rgistration.h"
#include "ElectricityBillingSystem.h"

int main() {
    ElectricityBillingsystem billingSystem(0.15);
    Customer customer1("Joe", "joe@example.com", "12315");
    Customer customer2("Ann", "ann@example.com" , "4124");
    billingSystem.generateBill(customer1, 100);
    billingSystem.generateBill(customer2, 200);
}
