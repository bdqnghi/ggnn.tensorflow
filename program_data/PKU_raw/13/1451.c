int main()
{
    int u[20000];
    int a,n,i,j,k,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&u[i]);
    }
   k=0;
   for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(u[i]==u[j])
            {
                u[j]=0;
               
            } 
        }
    }
    for(i=0;i<n;i++)
    {
        if(u[i]!=0)
        {
            k++;
        }
    }
    i=0;
    l=0;
    while(i<n)
    {
        if(u[i]!=0)
        
        {
            if(l<k-1)
            {
                printf("%d ",u[i]);
                l++;
            }
        
        else
            {
                printf("%d",u[i]);
            }
        }
    i++;
    }


    return 0;
}
    