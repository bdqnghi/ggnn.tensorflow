main()
{
      int a[5][5],i,j,x,y;
     int m[5]={0,0,0,0,0};
      x=1;
      y=0;
     int n[5]={0,0,0,0,0};
      for(i=0;i<5;i++)
      {
                      for(j=0;j<5;j++)
                      a[i][j]=0;
      }
      for(i=0;i<5;i++)
      {
                      for(j=0;j<5;j++)
                      scanf("%d",&a[i][j]);
      }
      for(i=0;i<5;i++)
      {
                      
                      for(j=0;j<5;j++)
                      {
                                      if(n[i]<a[i][j])
                                      {
                                                   n[i]=a[i][j];
                                                   m[i]=j;
                                      }
                      }
      }
      for(i=0;i<5;i++)
      {
                      for(j=0;j<5;j++)
                      {
                               if(n[i]>a[j][m[i]])
                               {
                                                  x=0;
                                break;
                                }
                                }
      if(x==1)  
     { printf("%d %d %d\n",i+1,m[i]+1,n[i]);
      y=1;}
      x=1;
      }
      if(y==0)
      printf("not found");
                       
}
