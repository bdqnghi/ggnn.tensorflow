main()
{ 
      int n,a,b,i,k;
      int *p=(int*)malloc(n*sizeof(int));
      int *q=(int*)malloc(n*sizeof(int));
      scanf("%d",&n);
      for(i=0;i<n;i++)
         { 
          p[i]=0;
         q[i]=0; 
         }
      for(k=0;;k++)
      {
         scanf("%d %d",&a,&b);
         if(a==0&&b==0)
         break;
         for(i=0;i<n;i++)
         {
                        
            if(a==i)
            {p[i]=p[i]+1;}
            if(b==i)
            {q[i]=q[i]+1;}
         }
      }
       for(i=0;i<n;i++)
         {   
            if(p[i]==0&&q[i]==n-1)
            {printf("%d",i);
            break;}
            }
        if(i==n)  
            {printf("NOT FOUND");
            }
            
            
 
   getchar();
      getchar();
      getchar();
      getchar();
}  