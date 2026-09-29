#include <stdio.h>

int main(void) {
    int time, motion, light, room, cooking = 0;
    printf("Time (0-23): ");
    scanf("%d", &time);
    printf("Motion detected (1/0): ");
    scanf("%d", &motion);
    printf("Light level (0-100): ");
    scanf("%d", &light);
    printf("Room (1=Living Room, 2=Bedroom, 3=Kitchen): ");
    scanf("%d", &room);

    if (room < 1 || room > 3) {
        printf("Invalid room\n");
        return 0;
    }
    if (room == 3) {
        printf("Cooking? (1/0): ");
        scanf("%d", &cooking);
    }

    printf("Light level: %d\n", light);
    if (time >= 23 || time < 6)
        printf("Mode: Night - lights OFF\n");
    else if (motion == 0)
        printf("Mode: Away - all OFF\n");
    else if (time >= 6 && time < 18)
        printf("Mode: Day - lights ON\n");
    else
        printf("Mode: Evening - dim lights\n");

    if (room == 3 && cooking == 1)
        printf("Exhaust fan ON\n");
    return 0;
}