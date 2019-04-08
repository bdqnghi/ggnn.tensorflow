main()
{
    int t,x;
    int i,j,l,d;
    char str[100000];
    int a[100000];
    scanf("%d",&t);
    for(x=0;x<t;x++)
    {
        d=0;
        for(i=0;i<100000;i++)
            a[i]=0;
        scanf("%s",str);
        l=strlen(str);
        for(i=0;i<l;i++)
        {
            for(j=0;j<l;j++)
                if(str[i]==str[j]) a[i]++;
            if(a[i]==1)
                {printf("%c\n",str[i]);d=1;break;}
        }
        if(d==0) printf("no\n");
    }
}
