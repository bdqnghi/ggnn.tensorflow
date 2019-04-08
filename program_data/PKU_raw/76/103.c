
int main()
{
    int n=0,i=0,j=0,m=0,p=0,k=0,q=0;
    scanf("%d",&n);
    
    int a[50000],b[50000];
    for(i = 0;i <50000;i++)
    {
          a[i] = b[i] = 0;
    }
    for(i=1;i<n+1;i++)
    { 
      scanf("%d%d", &a[i],&b[i]);
    }
    for(i = n;i >= 1;i--)
    { 
      for(j = 1;j < i+1;j++)
      {
            if(a[i]<a[j])
            {
                m=a[j];
                p=b[j];
                a[j]=a[i];
                b[j]=b[i];
                a[i]=m;
                b[i]=p;
            }
      }
    }
    k=b[1];
    for(i=1;i<n+1;i++)
    {  
       q=0;                        
       for(j=i;j>=1;j--)
       {
          if(a[i+1]>b[j])
              continue;
          else
              q=1;
       }
       if(q==0)
       {
               printf("no");      
               scanf("%d",m);
               return 0;
       }
     if(b[i]>k)
     k=b[i];    
    }
    printf("%d %d",a[1],k);

    
    //scanf("%d",&n);
    return 0;
}
