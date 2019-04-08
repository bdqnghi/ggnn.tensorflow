main()
{
      int n;
      scanf("%d",&n);
      int *a=(int *)malloc(n*sizeof(int));
      
      int k,i,j;
      for(k=0;k<n;k++)
      {a[k]=0;}
      for(k=0;;k++)
      {
                   scanf("%d %d",&i,&j);
                   if(i==0&&j==0) break;
                   else
                   {
                       a[i]-=1;
                       a[j]+=1;
                     
                   }
      }
      for(k=0;k<n;k++)
      {
                      if(a[k]==(n-1))
                      {
                                     printf("%d",k);
                                     break;
                                     k=0;
                      } 
      }
      if(k==n) printf("NOT FOUND");
      getchar();
      getchar();
}