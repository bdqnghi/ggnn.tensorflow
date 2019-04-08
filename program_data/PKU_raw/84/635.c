int main()
{
    int n,e,d,i,k,h,j;
    scanf("%d",&n);
    int sz[n-1];
    for(k=0;k<=n-1;k++)
        scanf("%d",&sz[k]);

        for(i=0;i<n-1;i++)
        {
            if(sz[i]>sz[i+1])
            {
                e=sz[i+1];
                sz[i+1]=sz[i];
	       sz[i]=e;

            }
        }

   
        for(i=0;i<n-2;i++)
        {
             if(sz[i]>sz[i+1])
            {
                d=sz[i+1];
                sz[i+1]=sz[i];
	       sz[i]=d;
            }
        }
    printf("%d\n%d\n",sz[n-1],sz[n-2]);
    return 0;
}