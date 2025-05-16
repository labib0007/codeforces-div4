#include <stdio.h>
#include <string.h>

int main()
{

    int t;
    scanf("%d", &t);

    char a[101];
    char b[101];

    int i = 0;
    int j;
    int z;

    int length;

    while (i < t)
    {
        scanf("%s", a);

        length = strlen(a);

        a[length] = '\0';

        for (j = length - 1, z = 0; z < length; j--, z++)
        {

            if (a[j] == 'p')
            {
                b[z] = 'q';
            }
            else if (a[j] == 'q')
            {
                b[z] = 'p';
            }
            else
            {
                b[z] = a[j];
            }
        }

        b[length] = '\0';

        printf("%s\n", b);

        i++;
    }

    return 0;
}
