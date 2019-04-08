int main()
{
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int a[11][11]={0};
    int b[11][11]={0};
    a[5][5]=m;
    b[5][5]=m;
    while(n>0)
    {
        for(i=1;i<=9;i++)
        {
            for(j=1;j<=9;j++){
                if(a[i][j]!=0)
                {
                     b[i][j]=b[i][j]+a[i][j];
                     b[i-1][j]+=a[i][j];
                     b[i-1][j-1]+=a[i][j];
                     b[i-1][j+1]+=a[i][j];
                     b[i][j-1]+=a[i][j];
                     b[i][j+1]+=a[i][j];
                     b[i+1][j]+=a[i][j];
                     b[i+1][j-1]+=a[i][j];
                     b[i+1][j+1]+=a[i][j];
                 }
             }
         }
        for(i=1;i<=9;i++)
        {
            for(j=1;j<=9;j++)
            {
                 a[i][j]=b[i][j];
             }
         }
     n--;
     }
     for(i=1;i<=9;i++)
     {
         for(j=1;j<=9;j++)
         {
             if(j!=9)
             { printf("%d ",a[i][j]);}
             else
             {printf("%d\n",a[i][j]); }
          }
       }
return 0;
}
        