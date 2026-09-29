#include <stdio.h>

int main() {
    int vehicle_type;
    printf("enter vehicle type (1 = bike, 2 = car, 3 = truck): ");
    if (scanf("%d", &vehicle_type) != 1) return 1;

    int hours;
    printf("enter hours parked: ");
    if (scanf("%d", &hours) != 1) return 1;

    int member_ship;
    printf("enter membership status (1 = member, 0 = non-member): ");
    if (scanf("%d", &member_ship) != 1) return 1;

    int fee = 0;
    float discount = 0.0;
    float final_fee = 0.0;

    if (vehicle_type < 1 || vehicle_type > 3) {
        printf("invalid vehicle type\n");
        return 1;
    }
    if (hours <= 0) {
        printf("invalid duration\n");
        return 1;
    }

    if (vehicle_type == 1) {
        fee = 20 * hours;
    } else if (vehicle_type == 2) {
        if (hours <= 2) {
            fee = 50;
        } else {
            fee = 50 + 30 * (hours - 2);
        }
    } else if (vehicle_type == 3) {
        if (hours <= 3) {
            fee = 100;
        } else {
            fee = 100 + 50 * (hours - 3);
        }
    }

    if (member_ship == 1 && fee > 200) {
        discount = fee * 0.15;
    }
    final_fee = fee - discount;

    printf("Final fee: %.2f\n", final_fee);
    return 0;
}