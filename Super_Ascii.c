#include <stdio.h>
int main()
{
    int counts[26], t, c;
    scanf("%d", &t);
    char str[10000];
    int arr[t];
    int k = 0;
    while (t --)
    {
        scanf("%s", str);
        fflush(stdin);
        int cnt = 0;
        c = 0;
        for (int i = 0; i < 26; i ++)
        {
            counts[i] = 0;
        }
        for (int i = 0; str[i] != '\0'; i ++)
       {
           counts[str[i] - 'a'] = counts[str[i] - 'a'] + 1;
       }
       for (int i = 0; i < 26; i ++)
       {
           if (counts[i] > 0)
           {
               cnt ++;
           }
       }
       for (int i = 0; i < 26; i ++)
       {
           if (counts[i] == i + 1)
           {
               c ++;
           }
       }
        //printf("%d\n", cnt);
        if (c == cnt)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}