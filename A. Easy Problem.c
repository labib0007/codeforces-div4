#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);

    int n;

    int i = 0;
    int a[100];

    int j, k;

    int counter;

    while (i < t)
    {

        scanf("%d", &n);

        j = 1;
        k = 0;
        counter = 0;

        while (1)
        {
            a[k] = n - j;
            counter++;

            if (j == a[0])
            {
                printf("%d\n", counter);

                break;
            }

            j++;
            k++;
        }

        i++;
    }

    return 0;
}