#include <stdio.h>
#include <string.h>

// int main()
// {
//     char str[] = "Anurag bhai is best heheheh";
//     for (int i = 0; i < strlen(str); i++)
//     {
//         str[i] = str[i] + 1;
//     }
//     printf("%s", str);
//     return 0;
// }
int main()
{
    char str[] = "Bovsbh!cibj!jt!cftu!ifififi";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }
    printf("%s", str);
    return 0;
}