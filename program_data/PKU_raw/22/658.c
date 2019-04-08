int main() 
  { 
     int a[301],i=1,n,j,k,t;
   
  while(scanf("%d",&a[i])!=EOF)
     {   scanf(",");     i++;  }
  n=i-1; 
 if(n==1)  printf("No\n");
 else {  
        for(i=1;i<n;i++)
              {  k=i;
               for(j=i+1;j<=n;j++)
                      if(a[k]<a[j])   k=j;
                        if(k!=i) 
                          {  t=a[k];  a[k]=a[i];  a[i]=t; }  
                     
               }
     if(a[n]==a[1])   
          printf("No\n");
       else 
              { i=1;
                while(a[i+1]==a[i])       i++;
                     printf("%d\n",a[i+1]);
               }
       } 
      return 0;


   }
