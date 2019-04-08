main()
{
      int a[9][9],b[9][9],i,j,k,m,n,fx,fy;
      scanf("%d %d",&m,&n);
      memset(a,0,sizeof(a));
      a[4][4]=m;
      for(k=0;k<n;k++)
      {
              memset(b,0,sizeof(b));
              for(i=1;i<8;i++)
              {
                                   for(j=1;j<8;j++)
                                   {
                                             b[i][j]+=a[i][j];
                                             for(fx=-1;fx<=1;fx++)
                                             {
                                                        for(fy=-1;fy<=1;fy++)
                                                        b[i+fx][j+fy]+=a[i][j];
                                             }
                                   }
              }
              memcpy(a,b,sizeof(a));
      }
      for(i=0;i<9;i++)
      {
                         for(j=0;j<8;j++)
                         printf("%d ",a[i][j]);
                         printf("%d\n",a[i][8]);
      }
}