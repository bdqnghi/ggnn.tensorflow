int main()
{
    int i,j,k,m,n,dmax,a[100],d[100];
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {  
                    scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    d[i]=1;
    
    
    
    for (i=n-2;i>=0;i--)
       {
                        for (j=i+1;j<n;j++)
                        {    
                             if((a[i]>=a[j])&&(d[i]<=d[j]))
                             {
                                  d[i]=d[j]+1;
                                                           
                                                           
                             }
                            
                            
                            
                            
                        }
       }
       
       
       
       dmax=0;
       for (i=0;i<n;i++)
       {  if(d[i]>dmax)
          dmax=d[i];
           
           
           
       }
    
    
    
    printf("%d\n",dmax);
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;   
}
