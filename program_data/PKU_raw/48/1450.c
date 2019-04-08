   
 
int  main()
{
   int a[11][11]={0};
   int b[11][11]={0};
   int i,j,k,l,m,n,x,y;
   scanf("%d %d",&m,&n);
   a[5][5]=m;
   b[5][5]=m;
   for(i=1;i<=n;i++)
      {
          for(j=1;j<10;j++)
             {
                 for(k=1;k<10;k++)
                    {
                         for(x=0-1;x<=1;x++)
                             {
                                 for(y=0-1;y<=1;y++)
                                     {
                                         b[j][k]=b[j][k]+a[j+x][k+y];
                                     }
                             }
                    }
             }
         for(j=1;j<10;j++)
             {
                for(k=1;k<10;k++)
                    {
                         a[j][k]=b[j][k];
                    }
             }
      }
   for(j=1;j<10;j++)
      {
         for(k=1;k<9;k++)
             {
                 printf("%d ",a[j][k]);
             }
         printf("%d\n",a[j][9]);
      }
   
}  