main()
{
int nn,ii;
scanf("%d",&nn);
for(ii=1;ii<=nn;ii++)
{
    int n,m,t,i,j,x,y,sum=0;
    scanf("%d %d",&y,&x);
    for(i=1;i<=y;i++)
    {
        for(j=1;j<=x;j++)
        {
            scanf("%d",&t);
            if(i==1||i==y||j==x||j==1)
            {sum+=t;}
        }
    }
    printf("%d\n",sum);
}
}
