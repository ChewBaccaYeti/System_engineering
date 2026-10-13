#include <stdio.h>

//? array of struct = Array where each element contains a struct {}
// helps organize and group together related data

typedef struct
{
    char model[50];    // car model name
    char fuelType[50]; // car fuel type
    int octaneRating;
    int year;
    int maxSpeed;       // In km/h
    float price;        // In USD
    float fuelCapacity; // In liters
} Car;

int main()
{

    Car cars[] = {
        {
            "Nissan Skyline R34 GT-R V-Spec II",
            "Premium Gasoline (98+ octane recommended)",
            98,
            1999,
            251,
            120000.00,
            60.0,
        },
        {
            "Toyota Supra MK4 (JZA80)",
            "Premium Gasoline (91+ octane)",
            91,
            1997,
            250,
            80000.00,
            70.0,
        },
        {
            "Mazda RX-7 FD3S",
            "Premium Gasoline (91+ octane)",
            91,
            1995,
            240,
            90000.00,
            76.0,
        },
        {
            "Honda NSX Type R",
            "Premium Gasoline (91+ octane)",
            91,
            1997,
            270,
            200000.00,
            70.0,
        },
        {
            "Subaru Impreza 22B STi",
            "Premium Gasoline (98+ octane recommended)",
            98,
            1998,
            220,
            250000.00,
            60.0,
        },
    };

    int num = sizeof(cars) / sizeof(cars[0]);
    printf("\n*** WELCOME TO CARS CATALOG ***\n");
    for (int i = 0; i < num; i++)
    {
        printf("\nModel: %s \nFuel type: %s \nOctane rating: %d+ \nYear: %d \nMaximal speed: %d KM/H \nPrice: $%.2f \nCanister capacity: %.1f \n", cars[i].model, cars[i].fuelType, cars[i].octaneRating, cars[i].year, cars[i].maxSpeed, cars[i].price, cars[i].fuelCapacity);
    }

    return 0;
}
