
int main()
{
    int n,i,j,t;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&(a[i]));
        scanf("%d",&(b[i]));
    }
    
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>i;j--)
        {
            if(a[j]<a[j-1])
            {
                t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
                
                t=b[j];
                b[j]=b[j-1];
                b[j-1]=t;
            }
        }
    }
    
    int s=0;
    for(i=1;i<n;i++)
    {
        for(j=i-1;j>-1;j--)
        {
                if(a[i]<b[j]+1) s=1;
                if(s==1) break;
          
        }
        
        if(s==0) 
        {
            printf("no");
            break;
        
        }
        
        if(s==1)
        {
            if(i<n-1) s=0;
        }
       
    }
    
    
    
    
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>i;j--)
        {
            if(a[j]<a[j-1])
            {
                t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
            }
            
            if(b[j]<b[j-1])
            {
                t=b[j];
                b[j]=b[j-1];
                b[j-1]=t;
            }
        }
    }
    
    
   
    if(s==1) 
    {
        printf("%d %d",a[0],b[n-1]);
    
    }
    
    
    return 0;}
