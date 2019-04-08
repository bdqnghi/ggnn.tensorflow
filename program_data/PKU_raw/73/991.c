main()
{
      int a[5][5];
      int i,j,k,s,t,e,f,y,m;
      for (i=0;i<=4;i++)
      {
          for(j=0;j<=4;j++)
          {
              scanf("%d",&a[i][j]);
          }
      }
      y=0;
      for (k=0;k<5;k++)
      {
          e=a[k][0];
          f=0;
          for (s=1;s<5;s++)
          {
              if(e<=a[k][s])
              {
                  e=a[k][s];
                  f=s;
              }
          }
          m=0;
          for(t=0;t<5;t++)
          {
              if (a[k][f]>a[t][f])
              {
                  m=1;
                  break;
              }
          }
          if (m==0)
          {
              printf ("%d %d %d\n",k+1,f+1,a[k][f]);
              y=1;
              break;
          }
      }
      if (y==0)
      printf ("not found\n");
}
    