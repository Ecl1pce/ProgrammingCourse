#include <stdio.h>
#include <string.h>
void read_word(char *s, int *i, char *w)
{
    int j;
    while (s[*i] <= ' ')
        (*i)++;
    j = 0;
    while (s[*i] != '\0' && s[*i] != ' ')
    {
        w[j] = s[*i];
        j++;
        (*i)++;
    }
    w[j] = '\0';
}
void strings()
{
    FILE *f;
    char s[300], w[100], ws[100], pred[2000], pred1[2000];
    s[0] = '\0';
    ws[0] = '\0';
    pred1[0] = '\0';
    int pr;
    int sl = 0;
    int str;
    int l = 0;
    f = fopen("2.txt", "r");
    if(!f)
    {
        puts("\n!!!Cannot find the file!!!\n");
        return;
    }
    while (!feof(f))
    {
        fgets(s, 300, f);

        int i = 0;
        str = 0;
        int vsp = 1;

        pred[0] = '\0';
        while (s[i] != '\0' && vsp)
        {
            read_word(s, &i, w);
            int k = strlen(w);
            if (sl < k)
            {
                sl = k;
                strcpy(ws, w);
            }
            if (w[k] == '.' || w[k] == '!' || w[k] == '?' || w[k - 1] == '.' || w[k - 1] == '!' || w[k - 1] == '?' || w[k - 2] == '.' || w[k - 2] == '!' || w[k - 2] == '?' || w[0] == '.' || w[0] == '!' || w[0] == '?' || s[i] == feof(f))
                vsp = 0;


            if (w[0] != '.'&& w[0] != '!' && w[0] != '?')
                str++;
            strcat(pred, w);
            strcat(pred, " ");
        }
        if (l < str)
        {
            l = str;
            strcpy(pred1, pred);
        }
    }
    printf("\nThe longest word:\n\n");
    puts(ws);
    printf("\nThe longest sentence:\n\n");
    puts(pred1);
    getchar();
    getchar();
}
