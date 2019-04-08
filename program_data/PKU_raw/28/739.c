int main()
{
    char s[10000], subs[300][30];
    int i=0, j, k, len[300];
    gets(s);
    for(j=0;;j++)
    {
        for(k=0;;)
        {
            if(s[i]!=' '&&s[i]!=0)
            {
                subs[j][k]=s[i];
                i++;
                k++;
            } 
            else if(s[i]==' '&&s[i+1]!=' '||s[i]==0)
            {
                subs[j][k]=0;
                i++;
                break;
            }
            else
            {
                i++;
            }  
        } 
        if(s[i-1]==0)
        {
            break;
        } 
    }
    for(k=0;k<=j;k++)
    {
        len[k]=strlen(subs[k]);
    }
    printf("%d", len[0]);
    for(k=1;k<=j;k++)
    {
        printf(",%d", len[k]);
    }
    scanf(" ");
    return 0;
}