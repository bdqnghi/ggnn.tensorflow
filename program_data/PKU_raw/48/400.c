main()
{
      int **squre1;
      int **squre2;
      squre1=(int**)calloc(len,sizeof(int*));
      squre2=(int**)calloc(len,sizeof(int*));
      for(int i=0;i<9;i++)
      {
              squre1[i]=(int*)calloc(len,sizeof(int));
              squre2[i]=(int*)calloc(len,sizeof(int));
      }
      int day;
      scanf("%d%d",&squre1[4][4],&day);
      for(int n=0;n<day;n++)
      {
              for(int i=4-n;i<=4+n;i++)
              for(int j=4-n;j<=4+n;j++)
              for(int x=i-1;x<=i+1;x++)
              for(int y=j-1;y<=j+1;y++)
              if(n%2==0)
              squre2[x][y]=0;
              else
              squre1[x][y]=0;
              
              for(int i=4-n;i<=4+n;i++)
              for(int j=4-n;j<=4+n;j++)
              for(int x=i-1;x<=i+1;x++)
              for(int y=j-1;y<=j+1;y++)
              {
                      if(x==i&&y==j)
                      {if(n%2==0)
                      squre2[x][y]+=2*squre1[i][j];
                       else
                        squre1[x][y]+=2*squre2[i][j];
                        }
                        else
                        if(n%2==0)
                        squre2[x][y]+=squre1[i][j];
                        else
                        squre1[x][y]+=squre2[i][j];
                        }

      }        
       
      if(day%2==0)
      for(int i=0;i<len;i++)
      {
              int count=0;
              for(int j=0;j<len;j++)
              {
                      if(count==0)
                      {printf("%d",squre1[i][j]);
                      count=1;}
                      else
                      printf(" %d",squre1[i][j]);
              }
              printf("\n");
      }
      else
      for(int i=0;i<len;i++)
      {
              int count=0;
              for(int j=0;j<len;j++)
              {
                      if(count==0)
                      {printf("%d",squre2[i][j]);
                      count=1;}
                      else
                      printf(" %d",squre2[i][j]);
              }
              printf("\n");
      }
     
      
    
}