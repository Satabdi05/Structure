#include<stdio.h>

int main()
{
    struct car
    {
        char  name[100];
        float price;
    };

    // car1.name -> "DEMON"
    //car1.price -> 996538.50
    struct car car1 ={"DEMON", 996538.50};

    //changing car1 price
    car1.price = 1000000.50;

    printf("Price of car1 = %f\n",car1.price); //output will be 1000000.50

    return 0;

}
