main()
{
      int n,m;
      scanf("%d",&n);
      int i,j;
     
      int* p=(int*)malloc(n*sizeof(int));
      int* q=(int*)malloc(n*sizeof(int));
       for(m=0;m<n;m++)
      {p[m]=0;q[m]=0;}
        
      for(;;)
      {      
               scanf("%d %d",&i,&j);
             if(i==0&&j==0) break;
             else
             {
              p[j]++;q[i]++; 
             }
      }
    
       int h=0;
      for(m=0;m<n;m++)
      {
         if(p[m]==(n-1)&&q[m]==0)
         printf("%d",m);
         else h++;
      }
      if(h==n)
      printf("NOT FOUND");
      getchar();
      getchar();
      
}