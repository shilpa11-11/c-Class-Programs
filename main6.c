#include <stdio.h>

float calculate_bill(int units_consumed, float *surcharge) {

    float fixed_charge = 100;


    float rate_per_unit;
    float bill_amount;


    if (units_consumed <= 100) {
        rate_per_unit = 5;
    } else if (units_consumed <= 300) {
        rate_per_unit = 7;
    } else {
        rate_per_unit = 10;
    }


    bill_amount = units_consumed * rate_per_unit + fixed_charge;


    if (bill_amount > 1000) {
        *surcharge = bill_amount * 0.05;
        bill_amount += *surcharge;
    } else {
        *surcharge = 0;
    }

    return bill_amount;
}

int main() {

    char customer_name[50];
    char customer_id[20];
    int units_consumed;
    float surcharge;
 printf("Enter customer name: ");
    fgets(customer_name, sizeof(customer_name), stdin);
    printf("Enter customer ID: ");
    fgets(customer_id, sizeof(customer_id), stdin);
    printf("Enter total units consumed: ");
    scanf("%d", &units_consumed);


    float bill_amount = calculate_bill(units_consumed, &surcharge);


    printf("\nCustomer Details:\n");
    printf("Customer Name: %s", customer_name);
    printf("Customer ID: %s", customer_id);
    printf("Total Units Consumed: %d units\n", units_consumed);
    printf("Bill Amount: R%.2f\n", bill_amount);


    if (surcharge > 0) {
        printf("Surcharge: R%.2f\n", surcharge);
    } else {
        printf("No surcharge applied.\n");
    }

    return 0;
}
