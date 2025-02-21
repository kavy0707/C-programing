#include <stdio.h>
#include <string.h>
struct travel
{
    char name[50];
    int lieno;
    int km;
    char routes[50];
};
void main()
{
    int n;
    printf("enter the number of drivers");
    scanf("%d", &n);
    struct travel driver[n];

    for (int i = 0; i < n; i++)
    {
        printf("enter driver name\n");

        scanf("%s", &driver[i].name);
        printf("enter driver lieno\n");
        scanf("%d", &driver[i].lieno);
        printf("enter driver travel km\n");
        scanf("%d", &driver[i].km);
        printf("enter driver route\n");
        scanf("%s", &driver[i].routes[50]);
    }
    for (int i = 0; i < n; i++)
    {
        printf(" \ndriver name= %s", driver[i].name);

        printf(" \ndriver lieno= %d", driver[i].lieno);

        printf(" \ndriver travel km=%d", driver[i].km);

        printf(" \ndriver route =%s", driver[i].routes);
    }
}
