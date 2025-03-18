// FOOD BILLING SYSTEM
#include <stdio.h>

main() {
    int choice, qty, totalBill = 0, itemTotal = 0,price = 0;;
    char MoreOrder;
    
    do {
        printf("\n--------- Menu ---------\n");
        printf("1. Pizza - Rs.180/pcs\n");
        printf("2. Burger - Rs.100/pcs\n");
        printf("3. Dosa - Rs.120/pcs\n");
        printf("4. Idli - Rs.50/pcs\n");
        
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            price = 180;
            printf("YOU HAVE SELECTED PIZZA\n");
        } else if (choice == 2) {
            price = 100;
            printf("YOU HAVE SELECTED BURGER\n");
        } else if (choice == 3) {
            price = 120;
            printf("YOU HAVE SELECTED DOSA\n");
        } else if (choice == 4) {
            price = 50;
            printf("YOU HAVE SELECTED IDLI\n");
        } else {
            printf("Invalid choice! Try again.\n");
            continue;
        }
        
        printf("Enter quantity: ");
        scanf("%d", &qty);
        
        itemTotal = price * qty;
        totalBill += itemTotal;
        
        printf("\nAmount for this order: Rs.%d\n", itemTotal);
        printf("Total Amount so far: Rs.%d\n", totalBill);
        
        printf("Do you want to order more? (y/n): ");
        scanf(" %c", &MoreOrder);
        
        if (MoreOrder != 'y' && MoreOrder != 'Y' && MoreOrder != 'n' && MoreOrder != 'N') {
            printf("Invalid choice! Enter 'y' To Continue or 'n' To Get Final Amount.\n");
            MoreOrder = 'y';
        }
        
    } while (MoreOrder == 'y' || MoreOrder == 'Y');
    
    printf("\nThank you for ordering!\nFinal Bill: Rs.%d\n", totalBill);
}
