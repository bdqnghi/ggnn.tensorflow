int a[11][11],b[11][11];

int grow(int i,int j)
{    
     int p;
     p=a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+2*a[i][j]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];  
     return p;   
}
main()
{
      int n,m,i,j,k;
      scanf("%d %d",&m,&n);
  
      for(i=0;i<11;i++)
       for(j=0;j<11;j++)
       {a[i][j]=0;
        b[i][j]=0;}
       a[5][5]=m;b[5][5]=m;
       for(k=1;k<=n;k++)
        { 
         for(i=1;i<=9;i++)
          for(j=1;j<=9;j++)
          b[i][j]=grow(i,j);
         for(i=1;i<=9;i++)
          for(j=1;j<=9;j++)
          a[i][j]=b[i][j];
        }
      for(i=1;i<=9;i++)
          for(j=1;j<=9;j++) 
         { if(j==9)
           printf("%d\n",b[i][j]);
           else
           printf("%d ",b[i][j]);
         }

}  

         
  