#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int test_case;
    scanf("%d", &test_case);
    int volume = 7;
    char test[] = "Skru op!";

    for (int i = 0; i < test_case; i++)
    {

        char input[10];
        scanf(" %[^\n]", &input);

        if (strcmp(input, test) == 0)
        {
            if (volume < 10)
            {
                volume++;
                // printf("%d\n", volume);
            }
        }
        else
        {
            if (volume > 0)
            {
                volume--;
                // printf("%d\n", volume);
            }
        }
    }
    printf("%d", volume);

    return 0;
}