
main()
{
      int i,j;
      int a[5][5];
      int max[5];
      int min[5];
      int b;
      int k=0;
      for(i=0;i<5;i++)
      for(j=0;j<5;j++)
      {
                      scanf("%d",&a[i][j]);
                      
      }
      for(i=0;i<5;i++) max[i]=a[i][0];
      for(j=0;j<5;j++) min[j]=a[0][j];
      for(i=0;i<5;i++)
      {
          for(j=0;j<5;j++)
          {
                          if(a[i][j]>max[i]) max[i]=a[i][j];
                          if(a[i][j]<min[j]) min[j]=a[i][j];
          }            
      }
      
       for(i=0;i<5;i++)
      {
          for(j=0;j<5;j++)
          {
                          if(max[i]==min[j])
                          {                  
                                             b=min[j];
                                            printf("%d %d %d",i+1,j+1,b);
                                            k++;
                          }
                          }
                          }
                          if(k==0)
                          printf("not found");
                          }