int fun(int a[500],int l)
{
    int i;
    int j=0;
    for(i=0;i<l;i++)
        if(a[i]!=a[l-i-1])
        {
            j=1;
            return 0;
        }
    if(j==0)
    {
        for(i=0;i<l;i++)
            printf("%c",a[i]);
        printf("\n");
        return 0;
    }


}

main()
{
    char s[500];
    int s1[500];
    int i,l,j,k;
    scanf("%s",s);
    l=strlen(s);
    for(i=2;i<=l;i++)
    {
        for(j=0;j<l-i+1;j++)
        {
            for(k=0;k<i;k++)
                s1[k]=s[k+j];
            fun(s1,i);
        }

    }

}

