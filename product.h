#ifndef PRODUCT_H
#define PRODUCT_H

typedef enum {FOOD,NON_FOOD} ProductType;
typedef enum{AVAILABLE,BELOW_MINIMUM,NOT_AVAILABLE} ProdcutStatus;

typedef struct {
    int ID;
    char desc[MAX_DESC_LEN];
    int quantity;
    char manufacturer[MAX_MANUFACTURER_LEN];
    long barCode;
    ProductType type;
    ProdcutStatus status;
} Product;

void displayProductTable(Product products[], int numProducts);

#endif /*PRODUCT_H*/