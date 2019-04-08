main()
{
    char a[800][80],b;
    int i,j,k,n;
    scanf("%d",&n); scanf("%c",&b);
    for (i=0;i<n;i++)
    {
        gets(a[i]);//scanf("%s",a[i]);
        if ((a[i][0]=='_')||((a[i][0]>='a')&&(a[i][0]<='z'))||((a[i][0]>='A')&&(a[i][0]<='Z')))
        {
            for (j=1;a[i][j]!='\0';j++)
            {
                        if ((a[i][j]=='_')||((a[i][j]>='a')&&(a[i][j]<='z'))||((a[i][j]>='A')&&(a[i][j]<='Z'))||((a[i][j]>='0')&&(a[i][j]<='9')))
                            continue ;
                            else
                           {
                                printf("0\n");break;
                           }
            }
            if (a[i][j]=='\0')
            printf("1\n");
        }
        else
        printf("0\n");
    }
}
