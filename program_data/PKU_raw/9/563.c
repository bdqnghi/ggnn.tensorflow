main()
{
      int n,k,j,i,age,m,y;
      int b[1000];
      char B[1000][100],C[1000][100],d[1000][100];
      char a[1000];
      scanf("%d",&n);
      y=0;
      k=0;
      for(i=0;i<=n-1;i++)
    {
      scanf("%s %d",a,&age);
      if(age<60)
     {
          strcpy(B[y],a);
          y++;           
     } 
      else
     {
          strcpy(C[k],a);
          b[k]=age;
          k++;
         
     }
    }
    int x=0;
    for(i=200;i>=60;i--)
    {
                        for(j=0;j<=k-1;j++)
                        {
                                           if(i==b[j])
                                           {
                                                   strcpy(d[x],C[j]);
                                                   x++;
                                           }
                        }
                        
    }
    
    
    for(i=0;i<=k-1;i++)  
    puts(d[i]);
    for(i=0;i<=n-k-1;i++)
    puts(B[i]);

 
    getchar(); getchar(); 
      
      
      
      
      
}

