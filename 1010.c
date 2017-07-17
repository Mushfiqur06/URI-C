#include <stdio.h>

int main() {
    //Initialize variable
    int codeOfProduct, unitOfProduct;
    double amountOfPerProduct, totalAmountOfProduct = 0;
    for(int i = 1; i <= 2; i++){
        //take input
        scanf("%d %d %lf",&codeOfProduct, &unitOfProduct, &amountOfPerProduct);
        totalAmountOfProduct += unitOfProduct * amountOfPerProduct;
    }
    //output the total amount
    printf("VALOR A PAGAR: R$ %.2lf\n",totalAmountOfProduct);

    return 0;
}
