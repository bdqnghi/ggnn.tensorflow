int main()
{
    int a,b,i,m,n;
    int c[13][13];
    for(a=1;a<=11;a++)
    {
        for(b=1;b<=11;b++)
        {
            c[a][b]=0;  
        }
    }
    int e[13][13];
    scanf("%d%d\n",&m,&n);
    c[6][6]=m;
    for(i=1;i<=n;i++)
    {
         for(a=2;a<=10;a++)
         {
              for(b=2;b<=10;b++)
              {
                   e[a][b]=2*c[a][b]+c[a-1][b-1]+c[a-1][b]+c[a-1][b+1]+c[a][b-1]+c[a][b+1]+c[a+1][b-1]+c[a+1][b]+c[a+1][b+1];
              }
         }
         for(a=2;a<=10;a++)
         {
              for(b=2;b<=10;b++)
              {
                   c[a][b]=e[a][b];
              }
         }
    }
    for(a=2;a<=10;a++)
    {
         for(b=2;b<=10;b++)
         {
              if(b==10) printf("%d\n",c[a][b]);
              else printf("%d ",c[a][b]);
         }
    }
return 0;
}     
