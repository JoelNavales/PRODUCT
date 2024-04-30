#include <stdio.h>
#include <stdlib.h>
#include "product.h"
#define MAX_PRODUCTS 100
#define MAX_DESC_LEN 100
#define MAX_MANUFACTURER_LEN 50

int main(){
    FILE *fp;
    char filename[]="product.txt";
    Product products[MAX_PRODUCTS];
    int numProducts = 0;

    //open file for reading 

    fp= fopen(filename,"r");
    if (fp == NULL){
        printf("Could not open file %s\n",filename);
        return 1;
    }
    //Read product data from file 
    while (fscnaf((fp, "%d %99s %d %49s %ld %d %d",
        &products[numProducts].ID, products[numProducts].desc,
        &products[numProducts].quantity, products[numProducts].manufacturer,
        &products[numProducts].barCode, (int*)&products[numProducts].type,
        (int*)&products[numProducts].status) == 7)){
    numProducts++; 
        if(numProducts >= MAX_PRODUCTS){
            printf("Too many products. Increase MAX_PRODUCTS");
        break;
         }
     }
    //close file
    fclose(fp);


    //display product table
    displayProductTable(products,numProducts);

    return 0;
}