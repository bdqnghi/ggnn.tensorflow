int main()
{
	int sz[MAX], n, k, i, j=1;
      	scanf("%d %d", &n, &k);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d ", &sz[i]);
	}
	for(i=0;i<n-1;i++,j=i+1)
	{
	  while(j<=n-1)
	   {       
		if(sz[i]+sz[j]==k)
		{         
	                   printf("yes");
                            return 0;
		}
                 j++;
             }         
           }
          printf("no");
}        
