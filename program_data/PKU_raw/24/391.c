int main()
{
    char s[1000],word[50][20];
    int i,j,k=0,t=0,max=0,min=0;
    gets(s);
    j=strlen(s);
    for (i=0;i<j;i++)
    if(!((s[i]>=65&&s[i]<=90)||(s[i]>=96&&s[i]<=122)||s[i]==39||s[i]==32)) s[i]='\0';
    for (i=0;s[i]!='\0';i++)
    {
        if (s[i]!=' '&&s[i]!='\0')
        word[k][t++]=s[i];
        else
        {
            word[k][t]='\0';
            k++;
            t=0;
        }
    }
    word[k][t]='\0';
    k++;
    for (i=0;i<k;i++)
    {
        if (strlen(word[i])>strlen(word[max])) max=i;
        if (strlen(word[i])<strlen(word[min])) min=i;
    }
    printf("%s\n%s",word[max],word[min]);
}
