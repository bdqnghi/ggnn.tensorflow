int main()
{
    int n,i,j,k=1,m=0;
    int sz[300],sz1[300];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&sz[i]);
    }
    for(i=n;i>=1;i--)
    {
         for(j=1;j<=i;j++)
         {
               if(sz[i]==sz[i-j])
               {
                   sz[i]=0;
                   m++;
               }
         }
   }
   for(i=1;i<=n;i++)
   {
         if(sz[i]!=0)
         {
             sz1[k]=sz[i];
             k++;
         }
   }
   for(i=1;i<n-m;i++)
   {
         printf("%d,",sz1[i]);
   }
   printf("%d",sz1[n-m]);
   return 0;
}