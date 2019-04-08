main()
{
      int n,i,j,k,e,m,x,y,z;
      char a[10000]={0},b[10000][100]={0},ch;
      int c[10000]={0};
      scanf ("%d",&n);
      scanf ("%s",a);
      for (i=0;a[i]!='\0';i++)
      {
          for (j=0;j<=n-1;j++)
          {
              if (a[i+n-1]!='\0')
              b[i][j]=a[i+j];
          }
      }
      for (i=0;a[i+n-1]!='\0';i++)
      {
          for (j=0;a[j+n-1]!='\0';j++)
          {
              e=0;
              for (k=0;k<=n-1;k++)
              {
                  if (b[i][k]==b[j][k]) e=e+1;
              }
              if (e==n) c[i]=c[i]+1;
          }
      }
      for (i=0;a[i+n-1]!='\0';i++)
      {
          for (j=i+1;a[j+n-2]!='\0';j++)
          {
              if (c[i]<c[j])
              {
                   x=c[j];
                   c[j]=c[i];
                   c[i]=x;
                   for (k=0;k<=n-1;k++)
                   {
                       ch=b[j][k];
                       b[j][k]=b[i][k];
                       b[i][k]=ch;
                   }
              }
          }
      }
      if (c[0]==1)
      printf ("NO");
      else
      {printf ("%d\n",c[0]);
       printf ("%s\n",b[0]);
       for (i=1;;i++)
       {
          z=0;
          if (c[i]==c[0])
          {
               for (j=i-1;j>=0;j--)
               { 
                   for(y=0,k=0;k<=n-1;k++)
                   {
                      if (b[i][k]==b[j][k])
                      y=y+1;  
                   }   
                   if (y==n)
                   z=1;
               }
               if (z==0) printf ("%s\n",b[i]);
          }
          else break;
       }
      }
}
