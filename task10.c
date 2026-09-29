#include <stdio.h>

int main() {
    float accuracy, confidence, score, average, dataPart;
    int dataset, role, flags;

    printf("Enter accuracy: ");
    scanf("%f", &accuracy);

    printf("Enter confidence: ");
    scanf("%f", &confidence);

    printf("Enter dataset size: ");
    scanf("%d", &dataset);

    printf("Role (1 Intern, 2 Engineer, 3 Admin): ");
    scanf("%d", &role);

    printf("Enter status flags: ");
    scanf("%d", &flags);

    dataPart = dataset / 1000.0;

    if (dataPart > 10)
        dataPart = 10;

    score = accuracy * 0.5 + confidence * 0.3
            + dataPart * 2;

    average = (accuracy + confidence) / 2;

    printf("Model score = %.2f\n", score);
    printf("Size of accuracy = %zu\n", sizeof(accuracy));
    printf("Size of confidence = %zu\n", sizeof(confidence));
    printf("Size of score = %zu\n", sizeof(score));
    printf("Size of dataset = %zu\n", sizeof(dataset));
    printf("Size of role = %zu\n", sizeof(role));
    printf("Size of flags = %zu\n", sizeof(flags));

    if (score > average)
        printf("Score is above average\n");
    else
        printf("Score is not above average\n");

    if (flags & 8)
        printf("Rejected: model deprecated");
    else if (!(flags & 1))
        printf("Rejected: not trained");
    else if (!(flags & 2))
        printf("Rejected: not validated");
    else if (!(flags & 4))
        printf("Pending: awaiting approval");
    else if (accuracy < 70 || confidence < 60)
        printf("Rejected: performance too low");
    else if (dataset < 5000)
        printf("Rejected: dataset too small");
    else if (role == 1)
        printf("Denied: interns cannot deploy");
    else if (role == 2 && score < 80)
        printf("Denied: engineer needs higher score");
    else if (role == 2 || role == 3)
        printf("Approved for deployment");
    else
        printf("Invalid role");

    return 0;
}