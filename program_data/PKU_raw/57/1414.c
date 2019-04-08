
int main()
{
    int i, n, suffixLen;
    char word[32], *p;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
       
        scanf("%s", word);

       
        for (p = word; *p; p++);

       
        switch (*(p-1)) 
        {
        case 'r': *(p-2) = '\0';; break; 
        case 'y': *(p-2) = '\0';; break;
        case 'g': *(p-3) = '\0';; break;
        }

       
        printf("%s\n", word);
    }
    return 0;
}