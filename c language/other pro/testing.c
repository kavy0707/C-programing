#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T); // Input number of test cases
    while (T--)
    {
        int N, X;
        scanf("%d %d", &N, &X); // Input total number of people and capacity of the party hall

        if (N <= X)
        {
            printf("YES\n"); // Chef can host the party
        }
        else
        {
            printf("NO\n"); // Chef cannot host the party
        }
        return 0;
    }
}