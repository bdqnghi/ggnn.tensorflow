main()
{
      int real[9][9]={0};
      int virtl[9][9]={0};
      int m,n,i,j,k;
      scanf("%d%d",&m,&n);
      for(i=3;i<6;i++)
          for(j=3;j<6;j++)
              real[i][j]=m;
      real[4][4]=2*m;
      
      for(k=3;k>4-n;k--)
      {
        
                 for(i=0;i<9;i++)
              {
                  for(j=0;j<8;j++)
                  {
                  virtl[i][j]=real[i][j];
                  real[i][j]=0;
                  }
              }
        
         for(i=k;i<9-k;i++)
         {
             for(j=k;j<9-k;j++)
             {
                 real[i][j]=real[i][j]+2*virtl[i][j];
                 real[i-1][j-1]+=virtl[i][j];
                 real[i-1][j]+=virtl[i][j];
                 real[i-1][j+1]+=virtl[i][j];
                 real[i][j-1]+=virtl[i][j];
                 real[i][j+1]+=virtl[i][j];
                 real[i+1][j-1]+=virtl[i][j];
                 real[i+1][j]+=virtl[i][j];
                 real[i+1][j+1]+=virtl[i][j];
             }
         }
      }
      
      
      
      
      
      
      
      
      for(i=0;i<9;i++)
      {
          for(j=0;j<8;j++)
              printf("%d ",real[i][j]);
          printf("%d\n",real[i][8]);
      }

}       
