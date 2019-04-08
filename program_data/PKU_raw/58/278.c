main()
{
    int n;
    scanf("%d",&n);
    int i=0,k=1;
    char a[100];
    for(i=0;i<=n;i++)
    {
        gets(a);
        if(i==0)
        continue;
        if((a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')||a[0]=='_')
        {
             for(int j=0;a[j]!='\0';j++)
             {
                 if((a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')||(a[j]>='0'&&a[j]<='9')||a[j]=='_')
                 k=k;
                 else
                 k=0;
             }
             if(k==1)
             printf("1\n");
             else
             printf("0\n");
             k=1;
        }
        else
        printf("0\n");
    }
    getchar();
    getchar();
    return 0;
}
