#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char str[4];
        scanf("%s", str);

        if (strcmp(str, "abc") == 0)
        {
            printf("YES\n");
        }
        else if (strcmp(str, "bac") == 0)
        {
            char temp = str[0];
            str[0] = str[1];
            str[1] = temp;
            if (strcmp(str, "abc") == 0)
            {
                printf("YES\n");
            }
        }
        else if (strcmp(str, "cba") == 0)
        {
            char temp = str[0];
            str[0] = str[2];
            str[2] = temp;
            if (strcmp(str, "abc") == 0)
            {
                printf("YES\n");
            }
        }
        else if (strcmp(str, "acb") == 0)
        {
            char temp = str[1];
            str[1] = str[2];
            str[2] = temp;
            if (strcmp(str, "abc") == 0)
            {
                printf("YES\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}