main()
{
    char a[1000];
    int n,i;
    scanf("%d",&n);
    for(;n>0;n--)
    {
        scanf("%s",a);
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]=='A')
            printf("T");
            if(a[i]=='T')
            printf("A");
            if(a[i]=='C')
            printf("G");
            if(a[i]=='G')
            printf("C");
        }
        printf("\n");
    }
}
