#include <stdio.h>

int main(void) {
    int cat, sub;
    printf("Category (1=Greeting, 2=Query, 3=Complaint, 4=Feedback): ");
    scanf("%d", &cat);
    if (cat < 1 || cat > 4) {
        printf("Invalid selection\n");
        return 0;
    }
    switch (cat) {
    case 1:
        printf("Sub-type (1=Morning, 2=Evening): ");
        scanf("%d", &sub);
        if (sub == 1) printf("Bot: Good morning! How can I help you?\n");
        else if (sub == 2) printf("Bot: Good evening! How can I help you?\n");
        else printf("Invalid selection\n");
        break;
    case 2:
        printf("Sub-type (1=Product, 2=Billing, 3=Technical): ");
        scanf("%d", &sub);
        if (sub == 1) printf("Bot: Here is the product information you asked for.\n");
        else if (sub == 2) printf("Bot: Connecting you to our billing team.\n");
        else if (sub == 3) printf("Bot: Our technical support will assist you shortly.\n");
        else printf("Invalid selection\n");
        break;
    case 3:
        printf("Sub-type (1=Delivery, 2=Quality): ");
        scanf("%d", &sub);
        if (sub == 1) {
            int delayed;
            printf("Is the order delayed? (1/0): ");
            scanf("%d", &delayed);
            if (delayed == 1)
                printf("Bot: We sincerely apologize for the delay. We are expediting your order.\n");
            else
                printf("Bot: Sorry for the trouble with your delivery. We will look into it.\n");
        } else if (sub == 2) {
            printf("Bot: We are sorry about the quality. A replacement/refund can be arranged.\n");
        } else printf("Invalid selection\n");
        break;
    case 4:
        printf("Sub-type (1=Positive, 2=Negative): ");
        scanf("%d", &sub);
        if (sub == 1) printf("Bot: Thank you for your kind feedback!\n");
        else if (sub == 2) printf("Bot: Thanks for telling us. We will work to improve.\n");
        else printf("Invalid selection\n");
        break;
    }
    return 0;
