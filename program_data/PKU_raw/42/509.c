

int main()
{
    int n,k,*p,*q,m,i,j,flag;
    int a[100001];
    p=&a[0];
    
    scanf("%d",&n);
    for(i=0;i<n;i++,p++)
        scanf("%d",&*p);
    scanf("%d",&k);
    p=&a[0];
    for(i=0;i<n;i++,p++)
    {
                          
    }
                        
    m=n;
    p=&a[0];
    for(i=0;i<=n;i++,p++)
    {
         if(p!=&a[0]&&*(p-1)==k)
         {
          p=p-1;
          i=i-1;
          j=j-1;                    
          }
                     
         if(*p==k)
         {
           q=p;
           for(j=i;j<n;j++,q++)    
              {
                *q=*(q+1);
                  
                
              }
           
           n=n-1;
           
           
          
           
          }
          
          
    }
    
    p=&a[0];
    for(i=0;i<n-1;i++,p++)
    {
     printf("%d ",*p);
    }
    printf("%d",*p);
}
