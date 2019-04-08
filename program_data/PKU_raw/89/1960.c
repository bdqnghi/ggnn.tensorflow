
main()
{
      int i,j,n;
      int a[2][10000]={0};
      scanf("%d",&n);
      scanf("%d %d",&i,&j);
      while(i!=0 || j!=0)
      {
          a[0][i]++;
          a[1][j]++;
          scanf("%d %d",&i,&j);       
      }
      for(i=0;i<n;i++)
      {
          if(a[0][i]==0 && a[1][i]==n-1)
          {
              printf("%d",i);
              break;          
          }            
      }
      if(i==n) printf("NOT FOUND");
} 
