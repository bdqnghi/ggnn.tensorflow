main()
{     int f[501][501],i,j,num,n,m;
      for (i=1;i<=500;i++)
      {f[i][1]=1; f[1][i]=1; f[i][0]=1;}
      
      for (i=2;i<=500;i++)
      for (j=2;j<=500;j++)
      { if (i>j) f[i][j]=f[j][j];
        else f[i][j]=f[i-1][j]+f[i][j-i];
      }
      scanf("%d",&num);
      for (i=0;i<num;i++)
      {
          scanf("%d %d",&m,&n);
          printf("%d\n",f[n][m]);
      }

}
