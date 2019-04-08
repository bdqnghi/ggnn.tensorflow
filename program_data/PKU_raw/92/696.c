main()
{
      int n[100]={0},t[100][1005]={0},q[100][1005]={0};
      int i,j,k,z=0;
      for (i=0;;i++)
      {
          scanf ("%d",&n[i]);
          if (n[i]==0) { z=i;break;}
          for (j=0;j<=n[i]-1;j++)
          { scanf ("%d",&t[i][j]); }
          for (j=0;j<=n[i]-1;j++)
          { scanf ("%d",&q[i][j]); }
      }
      for (i=0;i<=z-1;i++)
      {
          int change=0;
          for (j=0;j<=n[i]-1;j++)
          {   for (k=j+1;k<=n[i];k++)
              {  if (t[i][j]<t[i][k])
                 {
                   change=t[i][k];
                   t[i][k]=t[i][j];
                   t[i][j]=change;
                 }
                 if (q[i][j]<q[i][k])
                 {
                   change=q[i][k];
                   q[i][k]=q[i][j];
                   q[i][j]=change;
                 }
              }
          }
          int ft=0,fq=0,st=n[i]-1,sq=n[i]-1,money=0;
          for (j=ft;j<=st;j++)
          {
              for (k=fq;k<=sq;k++)
              {
                 if (t[i][j]>q[i][k])
                 { money = money +200; fq=fq+1; break; }
                 else if (t[i][st]>q[i][sq])
                 { money = money +200; st=st-1; sq=sq-1;j=j-1; break; }
                 else if (t[i][st]==q[i][fq])
                 {  break; }
                 else { money =money-200; fq=fq+1;st=st-1; j=j-1; break; }
              }
          }
          printf ("%d\n",money);
      }
}