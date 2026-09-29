#include <stdio.h>

int main() {
    int stream, interest, medicine;

    printf("1 Science, 2 Commerce, 3 Arts: ");
    scanf("%d", &stream);

    if (stream == 1) {
        printf("1 Biology, 2 Physics, 3 Chemistry: ");
        scanf("%d", &interest);

        if (interest == 1) {
            printf("Interested in medicine? (1 Yes, 0 No): ");
            scanf("%d", &medicine);

            if (medicine == 1)
                printf("Recommended course: MBBS");
            else if (medicine == 0)
                printf("Recommended course: Biotechnology");
            else
                printf("Invalid choice");
        }
        else if (interest == 2)
            printf("Recommended course: Physics");
        else if (interest == 3)
            printf("Recommended course: Chemistry");
        else
            printf("Invalid choice");
    }
    else if (stream == 2) {
        printf("1 Accounting, 2 Marketing: ");
        scanf("%d", &interest);

        if (interest == 1)
            printf("Recommended course: Accounting");
        else if (interest == 2)
            printf("Recommended course: Marketing");
        else
            printf("Invalid choice");
    }
    else if (stream == 3) {
        printf("1 Literature, 2 History, 3 Psychology: ");
        scanf("%d", &interest);

        if (interest == 1)
            printf("Recommended course: Literature");
        else if (interest == 2)
            printf("Recommended course: History");
        else if (interest == 3)
            printf("Recommended course: Psychology");
        else
            printf("Invalid choice");
    }
    else
        printf("Invalid choice");

    return 0;
}