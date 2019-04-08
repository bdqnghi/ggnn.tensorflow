main()
{
    int i,n=1,m=1,j=1,f1=1,f2=1;
    scanf("%d",&n);
    if(n<=4)
    printf("empty");
    if(n>=5)
    {    f1=3;
        for(i=3;i<=n;i=i+2)
        {
            m=sqrt(i);
            for(j=2;j<=m;j++)
             if(i%j==0)break;
            if(j>=m+1)
            f2=i;
            if(f2==f1+2)
            {


                printf("%d %d\n",f1,f2);
                f1=f2;
            }
            else
            f1=f2;




        }



    }
}
