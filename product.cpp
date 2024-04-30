#include "product.h"
#include <stdio.h>

void displayProductTable(Product prodcuts[], int numProducts){
    printf("+----+--------------------------------------+----------+-------------------+---------------+--------------+-----------------+\n");
    printf("| ID | Description                          | Quantity | Manufacturer      | Barcode       | Product Type | Status          |\n");
    printf("+----+--------------------------------------+----------+-------------------+---------------+--------------+-----------------+\n");

    for (int i = 0; i < numProducts; i++){
        printf(" | %-2d | %-35s | %-8d | %-17s | %-13ld | %-12s | %-15s |\n",
             products[i].ID, products[i].desc, products[i].quantity, products[i].manufacturer,
             products[i].barCode, (products[i].type == FOOD) ? "Food" : "Non Food",
            (products[i].status == AVAILABLE) ? "Available" :
            (products[i].status == BELOW_MINIMUM) ? "Below Minimum" : "Not Available");
    }
    printf("+----+--------------------------------------+----------+-------------------+---------------+--------------+-----------------+\n");
}