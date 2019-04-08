int main()
{
 int i,j,m,n,t,a[11][11]={0},b[11][11]={0};
 scanf("%d %d",&m,&n);
 a[5][5]=m;
 for (t=0;t<n;t++)
 {
   for (i=1;i<=9;i++)
    {
     for (j=1;j<=9;j++)
     {
        if (a[i][j]!=0)
         {
           b[i][j]=a[i][j]*2+b[i][j];
           b[i][j+1]=b[i][j+1]+a[i][j];
           b[i][j-1]=b[i][j-1]+a[i][j];
           b[i+1][j]=b[i+1][j]+a[i][j];
           b[i-1][j]=b[i-1][j]+a[i][j];
           b[i+1][j+1]=b[i+1][j+1]+a[i][j];
           b[i-1][j+1]=b[i-1][j+1]+a[i][j];
           b[i-1][j-1]=b[i-1][j-1]+a[i][j];
           b[i+1][j-1]=b[i+1][j-1]+a[i][j];
         }
      }
    }   
    for (i=1;i<=9;i++)
    {
     for (j=1;j<=9;j++)
     {
           a[i][j]=b[i][j];
     }
    }    
   for (i=0;i<=9;i++)
   {
    for (j=0;j<=9;j++)
     b[i][j]=0;
   }
 }
    for (i=1;i<=9;i++)
    {
     for (j=1;j<=9;j++)
     {
      if (j==1)   
       printf("%d",a[i][j]);
      if(j>1&&j<9)
       printf(" %d",a[i][j]);
       if (j==9)
        printf(" %d\n",a[i][j]);
     }     
    }

}
