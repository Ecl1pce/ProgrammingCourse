
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
