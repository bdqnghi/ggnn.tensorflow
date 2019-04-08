main ()
{
     int m,t,n,i,j,temp,sum,count;
     scanf ("%d",&n);
     int a[101][101];
     m=n;
     for (;n>0;n--)
     {
         sum=0;
         for (i=1;i<=m;i++)
         {
             for (j=1;j<=m;j++)
             {scanf ("%d",&a[i][j]);}
         }
         t=m;
         for (;t>2;t--)
         {
             for (i=1;i<=t;i++)
             {
                          temp=a[i][1];
                          for (j=2;j<=t;j++)
                          if (temp>a[i][j]) {temp=a[i][j];}
                          for (j=1;j<=t;j++)
                          a[i][j]=a[i][j]-temp;
             }
             for (j=1;j<=t;j++)
              {
                  count=0;
                  for (i=1;i<=t;i++)
                  {
                      if (a[i][j]==0) {break;}
                      else count++;
                  }
                  if (count==t)
                  {
                               temp=a[1][j];
                               for (i=2;i<=t;i++)
                               if (temp>a[i][j]) {temp=a[i][j];}
                               for (i=1;i<=t;i++)
                               a[i][j]=a[i][j]-temp;
                  }
                  else {continue;}
              }
              sum=sum+a[2][2];
             for (i=2;i<=t-1;i++)
                 for (j=1;j<=t;j++)
                     a[i][j]=a[i+1][j];
             for (i=1;i<=t-1;i++)
                 for (j=2;j<=t-1;j++)
                     a[i][j]=a[i][j+1];
         }
       for (i=1;i<=2;i++)
                          {
                              temp=a[i][1];
                              for (j=2;j<=2;j++)
                              if (temp>a[i][j]) {temp=a[i][j];}
                              for (j=1;j<=2;j++)
                              a[i][j]=a[i][j]-temp;
                          }
       for (j=1;j<=2;j++)
                          {
                              temp=a[1][j];
                              for (i=2;i<=2;i++)
                              if (temp>a[i][j]) {temp=a[i][j];}
                              for (i=1;i<=2;i++)
                              a[i][j]=a[i][j]-temp;
                          }
       sum=sum+a[2][2];
       printf ("%d\n",sum);
       }
}