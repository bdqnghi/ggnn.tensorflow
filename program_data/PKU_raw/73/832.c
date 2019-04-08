main()
{
      int a[5][5],b[7];
      int i,j,k,x,m,y=0;
      for (i=0;i<=4;i++)
      {
          for (j=0;j<=4;j++)
          {
              scanf ("%d",&a[i][j]);
          }
      }
      for (i=0;i<=4;i++)
      {
          x=a[i][0],m=0;
          for (j=0;j<=4;j++)
          {
              if (x<a[i][j])
              { x=a[i][j]; m=j;}
          }
          for (b[i]=0,k=0;k<=4;k++)
          {
              if (a[i][m]>a[k][m])
              break;
              else b[i]=b[i]+1;
          }
          if (b[i]==5)
          { y=y+1; printf ("%d %d %d\n",i+1,m+1,a[i][m]); }
      }
      if (y==0) printf ("not found\n");
}