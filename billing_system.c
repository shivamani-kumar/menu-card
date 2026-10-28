#include <stdio.h>

int main()
{
    int choice = -1, quantity;
    int totalitems = 0;
    int latte = 0, americano = 0, milk_shakes = 0;
    int cappuccino = 0, tea = 0;
    float price, totalbill = 0;

    printf("\n=============== Hyderabadi Cafe ==============\n");
    printf("\n----------------------------------------------");
    printf("\nEntry  |       Item                  | Price");
    printf("\n----------------------------------------------\n");
    printf(" 1.          Latte                      200");
    printf("\n 2.          Americano                  100");
    printf("\n 3.          Milk Shake                 300");
    printf("\n 4.          Cappuccino                 500");
    printf("\n 5.          Tea                         10");
    printf("\n\nNote: Enter 0 to exit.\n");

    while (choice != 0)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }

        switch (choice)
        {
            case 1:
                price = 200;
                break;

            case 2:
                price = 100;
                break;

            case 3:
                price = 300;
                break;

            case 4:
                price = 500;
                break;

            case 5:
                price = 10;
                break;

            default:
                printf("Invalid choice!\n");
                continue;
        }

        printf("Enter the quantity: ");
        scanf("%d", &quantity);

        if (quantity <= 0)
        {
            printf("Invalid quantity! Enter a positive number.\n");
            continue;
        }

        switch (choice)
        {
            case 1:
                latte += quantity;
                break;

            case 2:
                americano += quantity;
                break;

            case 3:
                milk_shakes += quantity;
                break;

            case 4:
                cappuccino += quantity;
                break;

            case 5:
                tea += quantity;
                break;
        }

        printf("Price per unit: %.2f\n", price);
        printf("Quantity: %d\n", quantity);
        printf("Subtotal: %.2f\n", price * quantity);

        totalitems += quantity;
        totalbill += price * quantity;
    }

    printf("\n=============== Hyderabadi Cafe ================\n");
    printf("\n---------------- BILL -----------------------\n");

    if (latte != 0)
        printf("%d x Latte       = %d\n", latte, latte * 200);

    if (americano != 0)
        printf("%d x Americano   = %d\n", americano, americano * 100);

    if (milk_shakes != 0)
        printf("%d x Milk Shake  = %d\n", milk_shakes, milk_shakes * 300);

    if (cappuccino != 0)
        printf("%d x Cappuccino  = %d\n", cappuccino, cappuccino * 500);

    if (tea != 0)
        printf("%d x Tea         = %d\n", tea, tea * 10);

    printf("---------------------------------------------\n");
    printf("Total items = %d\n", totalitems);
    printf("Total bill  = %.2f\n", totalbill);
    printf("---------------------------------------------\n");

    return 0;
}