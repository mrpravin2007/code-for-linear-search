
#include <stdio.h>

int main()
{
    int a[5], key, i, found = 0;

    // Input array elements
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    // Input number to search
    printf("Enter number to search: ");
    scanf("%d", &key);

    // Search the number
    for (i = 0; i < 5; i++)
    {
        if (a[i] == key)
        {
            found = 1;
            break;
        }
    }

    // Display result
    if (found)
        printf("%d number is present.\n", key);
    else
        printf("%d number is not present.\n", key);

    return 0;
}

