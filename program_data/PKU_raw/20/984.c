int main()
{
    char str[1000],substr[1000];
    while(scanf("%s %s",str,substr)!=EOF)
    {
        int len1=strlen(str);
        int i,j,k,max,temp;
        max=str[len1-1];
        for(i=len1-1;i>=0;i--)
        {
            if(str[i]>=max)
            {
                max=str[i];
                temp=i;
            }
        }
        for(i=0;i<len1;i++)
        {
            if(i==temp)
            {
                printf("%c",str[i]);
                printf("%s",substr);
            }
            else printf("%c",str[i]);

        }
        printf("\n");
    }
return 0;
}
