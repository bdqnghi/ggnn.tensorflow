main()
{
    char str[31];
    gets(str);
    int n;
    n=strlen(str);
    for(int i=0;i<n;i++)
    {
        if(str[i]>='0'&&str[i]<='9')
            printf("%c",str[i]);
        else
        {
            printf("\n");
            for(;str[i]<'0'||str[i]>'9';i++)
            {}
            i--;
        }
    }
    getchar();
}
