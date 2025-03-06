//#include <stdio.h>
//
//int main() {
//    float user1_balance, user2_balance, transfer_amount;
//
//    // Input user1 and user2 balances
//    printf("Enter balance for User 1: ");
//    scanf("%f", &user1_balance);
//    printf("Enter balance for User 2: ");
//    scanf("%f", &user2_balance);
//
//    // Ask user1 to enter the amount to transfer
//    printf("Enter the amount to transfer from User 1 to User 2: ");
//    scanf("%f", &transfer_amount);
//
//    // Check if the transfer amount is valid
//    if (transfer_amount <= 0) {
//        printf("Invalid transfer amount. It must be greater than zero.\n");
//    } else if (transfer_amount > user1_balance) {
//        printf("Insufficient balance in User 1's account for this transfer.\n");
//    } else {
//        // Transfer money
//        user1_balance -= transfer_amount;
//        user2_balance += transfer_amount;
//
//        // Display updated balances
//        printf("\nTransfer Successful!\n");
//        printf("Updated balance for User 1: %.2f\n", user1_balance);
//        printf("Updated balance for User 2: %.2f\n", user2_balance);
//    }
//
//    return 0;
//}

