#include <stdio.h>
#include <string.h>

char *items[5] = {"tv", "mobile", "ac", "speaker", "fan"};
int price[5] = {10000, 15000, 25000, 5000, 2000}, order[5][4], orders;
int dprice[5] = {9200, 13800, 23000, 4600, 1840};
struct party
{
    char name[50];
    int rupees;
} p[5];
struct party p[5] = {
    {"kavy", 0},
    {"sarang", 0},
    {"nayan", 0},
    {"karthik", 0},
    {"avi", 0}};

void payment()
{

    char name[50];
    printf("\n kavy,sarang,nayan,karthik,avi");
    printf("\n enter name:");
    scanf("%s", name);
    int temp;
    if (strcmp(name, "kavy") == 0)
    {
        temp = p[0].rupees;
    }
    else if (strcmp(name, "sarang") == 0)
    {
        temp = p[1].rupees;
    }
    else if (strcmp(name, "nayan") == 0)
    {
        temp = p[2].rupees;
    }
    else if (strcmp(name, "karthik") == 0)
    {
        temp = p[3].rupees;
    }
    else
    {
        temp = p[4].rupees;
    }
    int pay;
    printf(" \n your pending amount to pay is:%d ", temp);

    printf("\n enter amount for payment :");
    scanf("%d", &pay);

    temp = temp - pay;

    if (strcmp(name, "kavy") == 0)
    {
        p[0].rupees = temp;
        printf("\n pending amount= %d", p[0].rupees);
    }
    else if (strcmp(name, "sarang") == 0)
    {
        p[1].rupees = temp;
        printf("\n pending amount= %d", p[1].rupees);
    }
    else if (strcmp(name, "nayan") == 0)
    {
        p[2].rupees = temp;
        printf("\n pending amount= %d", p[2].rupees);
    }
    else if (strcmp(name, "karthik") == 0)
    {
        p[3].rupees = temp;
        printf("\n pending amount= %d", p[3].rupees);
    }
    else
    {
        p[4].rupees = temp;
        printf("\n pending amount= %d", p[4].rupees);
    }
}
void sellorder()
{
    char name[50];
    printf("\n kavy,sarang,nayan,karthik,avi");
    printf("\n enter name from above:");
    scanf("%s", name);
    printf("how many item you want to buy:");
    scanf("%d", &orders);
    printf("enter :: 1.tv=10000  2.mobile=15000  3.ac=25000  4.speraker=5000  5.fan=2000\n");
    for (int i = 0; i < orders; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            printf("enter name of item:");
            scanf("%d", &order[i][j]);
            printf("enter price of item:");
            scanf("%d", &order[i][j + 2]);
            printf("enter quntity of item:");
            scanf("%d", &order[i][j + 1]);

            // price compare  part::
            int customerprice, allitem;
            allitem = order[i][j];
            // printf("\n%d",allitem);
            int trmp = allitem - 1;
            customerprice = order[i][j + 2];
            if (customerprice < dprice[trmp])
            {
                int con;
                printf("\nminimum price of this item is:%d", dprice[trmp]);
                printf("\nyou want to buy it:");
                printf("\t enter 1: yes  0:no ::");
                scanf("%d", &con);
                if (con == 1)
                {
                    order[i][j + 2] = dprice[trmp];
                }
                else
                {
                    order[i][j] = 0;
                    order[i][j + 1] = 0;
                    order[i][j + 2] = 0;
                }
            }
        }
    }

    // for print
    for (int i = 0; i < orders; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            printf("\n%d name of item:%d", i, order[i][j]);
            printf("\n%d quntity of item:%d", i, order[i][j + 1]);
            printf("\n%d price  of item:%d", i, order[i][j + 2]);
        }
    }

    // calculation final price

    int totalcost = 0;
    for (int i = 0; i < orders; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            order[i][j + 3] = order[i][j + 2] * order[i][j + 1];
            if (order[i][j] == 0)
            {
                printf("\n total price of tv is :: %d", order[i][j + 3]);
            }
            else if (order[i][j] == 1)
            {
                printf("\n total price of mobile is :: %d", order[i][j + 3]);
            }

            else if (order[i][j] == 2)
            {
                printf("\n total price of ac is :: %d", order[i][j + 3]);
            }
            else if (order[i][j] == 3)
            {
                printf("\n total price of speaker is :: %d", order[i][j + 3]);
            }
            else
            {
                printf("\n total price of fan is :: %d", order[i][j + 3]);
            }

            totalcost = totalcost + order[i][j + 3];
        }
    }
    printf("\n\n total price :: %d", totalcost);

    int temp;
    if (strcmp(name, "kavy") == 0)
    {
        p[0].rupees = p[0].rupees + totalcost;
        printf("\nyour pending amount is : %d", p[0].rupees);
    }
    else if (strcmp(name, "sarang") == 0)
    {
        p[1].rupees = p[1].rupees + totalcost;
        printf("\nyour pending amount is : %d", p[1].rupees);
    }
    else if (strcmp(name, "nayan") == 0)
    {
        p[2].rupees = p[2].rupees + totalcost;
        printf("\nyour pending amount is : %d", p[2].rupees);
    }
    else if (strcmp(name, "karthik") == 0)
    {
        p[3].rupees = p[3].rupees + totalcost;
        printf("\nyour pending amount is : %d", p[3].rupees);
    }
    else
    {
        p[4].rupees = p[4].rupees + totalcost;
        printf("\nyour pending amount is : %d", p[4].rupees);
    }
}
void display()
{
    char name[50];
    printf("\n kavy,sarang,nayan,karthik,avi");
    printf("\n enter name:");
    scanf("%s", name);
    int temp;
    if (strcmp(name, "kavy") == 0)
    {
        printf("\n pending amount= %d", p[0].rupees);
    }
    else if (strcmp(name, "sarang") == 0)
    {
        printf("\n pending amount= %d", p[1].rupees);
    }
    else if (strcmp(name, "nayan") == 0)
    {
        printf("\n pending amount= %d", p[2].rupees);
    }
    else if (strcmp(name, "karthik") == 0)
    {
        printf("\n pending amount= %d", p[3].rupees);
    }
    else
    {
        printf("\n pending amount= %d", p[4].rupees);
    }
}
void main(int argc, char const *argv[])
{
    int choice;
    do
    {
        printf("\n enter the choice 1.sellorder   2.checkstatus   3.payment 4.quite ::");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            sellorder();
            break;

        case 2:
            display();
            break;

        case 3:
            payment();
            break;

        default:
            printf("enter valid choice");
        }
    } while (choice != 4);
}
