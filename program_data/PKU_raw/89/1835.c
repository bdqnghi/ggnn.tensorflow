int main()
{
    int n,m,l,k,i;
    scanf("%d",&n);
    int a[100000],b[100000],c[n],d[n];
    for(i=0;;i++)
    {
                   scanf("%d %d",&a[i],&b[i]);
                 if(a[i]==0&&b[i]==0)
                 break;
             
      }
       for(i=0;i<n;i++)
    {
         c[i]=0;
         d[i]=0;
         
      }
      k=0;
       for(i=0;;i++)
    {    
      if(a[i]==0&&b[i]==0)
                 break;
                 else
                     { m=a[i];
        c[m]=1;
        l=b[i];
        d[l]++;}
        
                
      }
          for(i=0;i<n;i++)
    {
           if(c[i]==0&&d[i]==n-1)
           printf("%d",i);
           k=1;
      }
      if(k==0)
       printf("NOT FOUND");
      
      
      

    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    

}



