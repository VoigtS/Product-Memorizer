#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <memory.h>
#define START 3
#include "structs.h"
#include "products.h"

int main()
{
    handle national_products;
    national_products.allocation = START;
    national_products.count = 0;

    choose(&national_products);
}