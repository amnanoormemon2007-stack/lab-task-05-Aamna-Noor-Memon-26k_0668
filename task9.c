#include <stdio.h>

int main() {
    int permissions;

    printf("Enter permissions: ");
    scanf("%d", &permissions);

    if (permissions & 1)
        printf("READ bit detected\n");
    if (permissions & 2)
        printf("WRITE bit detected\n");
    if (permissions & 4)
        printf("EXECUTE bit detected\n");
    if (permissions & 8)
        printf("DELETE bit detected\n");
    if (permissions & 16)
        printf("ADMIN bit detected\n");

    if (permissions & 16)
        printf("Full access: admin");
    else if ((permissions & 8) && (permissions & 2))
        printf("Access: delete and write");
    else if ((permissions & 4) && !(permissions & 2))
        printf("Access: execute only");
    else if ((permissions & 1) &&
             !(permissions & 2) &&
             !(permissions & 4))
        printf("Access: read-only");
    else if ((permissions & 31) == 0)
        printf("Access denied");
    else
        printf("Access: custom permissions");

    return 0;
}