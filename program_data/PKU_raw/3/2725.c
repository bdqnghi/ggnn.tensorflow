int main()
{
 int i,j,n,k,a[1001];
 scanf("%d %d",&n,&k);
 for(i=1;i<=n;i++)
 {
   scanf("%d",&a[i]);
  }
 for(i=1;i<=n;i++)
 {
   for(j=i+1;j<=n;j++)
     {
        
         
        
          
            if(a[i]+a[j]==k)
              {
              printf("yes");
              break;
              }
           
      }
    if(a[i]+a[j]==k)
     break;
    if(i==n)
     printf("no");
}      
}