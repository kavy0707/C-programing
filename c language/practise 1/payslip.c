#include <stdio.h>
void main()
{
    float b;
    printf("enter the value of basic\n");
    scanf("%f", &b);
    float DA, HRA, MA, PF;
    DA = 10 * b / 100;
    printf("\n");
    HRA = 7.50 * b / 100;
    printf("\n");
    MA = 300;
    printf("\n");
 PF = 12.50 * b / 100;
    printf("b=%d",b);
    printf("\n");
    printf("DA=%f", DA);
    printf("\n");
    printf("HRA=%f", HRA);
    printf("\n");
    printf("PF=%f", PF);
    printf("\n");
    float gross, net;
    gross = b + DA + HRA + MA;
    printf("gross=%f\n", gross);
    net = gross - PF;
    printf("NET=%f", net);
}