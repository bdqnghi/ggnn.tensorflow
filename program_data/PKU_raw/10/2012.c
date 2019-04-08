int max(int t1[],int t2[],int m,int n,int d)
{
    int i,y=0;
    for(i=m+1;i<n;i++)
    {               
       if(t1[i]<=d&&t2[i]>y)
       y=t2[i];                  
    }
    return  y;    
}
main()
{
      int a[10000],b[10000]={0},i,j,n,t,x=0;
      scanf("%d",&n);
      for(i=0;i<n;i++)
          scanf("%d",&a[i]);
      b[n-1]=1;    
      for(i=n-2;i>=0;i--)
      {
          b[i]=max(a,b,i,n,a[i])+1;
      } 
      for(i=0;i<n-1;i++)
      {
         if(b[i]>x)
         x=b[i];                
      } 
    printf("%d",x);
     
}
