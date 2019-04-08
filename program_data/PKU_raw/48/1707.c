int m[L+5][L+5]={0},tmp[L+5][L+5]={0};
int i=0,j=0,k=0;
int n;
main()
{     
      scanf("%d%d",&m[4][4],&n);
      for(k=1;k<=n;k++)
      {
                         memset(tmp,0,sizeof(tmp));
      for(i=0;i<=L-1;i++) 
      {
                          for(j=0;j<=L-1;j++)
                          {
                                             tmp[i][j]=2*m[i][j]+m[i-1][j-1]+m[i][j-1]+m[i+1][j-1]+m[i+1][j]+m[i-1][j]+m[i+1][j+1]+m[i][j+1]+m[i-1][j+1];
                          }
      }
      for(i=0;i<=L-1;i++) 
      {
                          for(j=0;j<=L-1;j++)
                          {
                                             m[i][j]=tmp[i][j];
                          }
      }
      }
      for(i=0;i<=L-1;i++)
      {
           printf("%d %d %d %d %d %d %d %d %d\n",m[i][0],m[i][1],m[i][2],m[i][3],m[i][4],m[i][5],m[i][6],m[i][7],m[i][8]);
      }
      getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
}
