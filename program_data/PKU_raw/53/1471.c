int main()
{
    int n,sz[400],i,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&sz[i]);
    }
    printf("%d",sz[0]);
    for(i=1;i<n;i++)
    {
         int t=0;           
         for(k=0;k<i;k++)
         {
              if(sz[k]==sz[i])
              {
                   t=1;
              }
              if(t==1)
              {
                      continue;
              }
         }
         if(t==1)
         {
                 continue;
         }
         else
         {
             printf(",%d",sz[i]);
         }
    }
    return 0;
}                                             
                    
