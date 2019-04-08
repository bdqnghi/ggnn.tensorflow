main()
{
      int i,j,k,m;
      int p[5][5];
      for(i=0;i<=4;i++)
      {
                       for(j=0;j<=4;j++)
                       scanf("%d",&p[i][j]);
      }
      for(i=0;i<=4;i++)
      {
                       k=0;
                       m=0;
                       for(j=0;j<=3;j++)
                       if(p[i][k]<p[i][j+1]) k=j+1;
                       for(j=0;j<=3;j++)
                       if(p[m][k]>p[j+1][k]) m=j+1;
                       if(m==i) break;
      }
      if(i==5) printf("not found");
      else printf("%d %d %d",m+1,k+1,p[m][k]);
}
