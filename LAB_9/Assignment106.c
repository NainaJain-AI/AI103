#include <stdio.h>
#include <string.h>
struct Item {
    char item_name[50];  
    int quantity;       
    float price;         
};

int main() {
    struct Item item;  

    
    printf("Enter the item name: ");
    fgets(item.item_name, sizeof(item.item_name), stdin);
    item.item_name[strcspn(item.item_name, "\n")] = '\0';  

    printf("Enter the quantity: ");
    scanf("%d", &item.quantity);

    printf("Enter the price: ");
    scanf("%f", &item.price);

    
    printf("\nItem Details:\n");
    printf("Name: %s\n", item.item_name);
    printf("Quantity: %d\n", item.quantity);
    printf("Price: %.2f\n", item.price);

    return 0;
}

