int main()
{
    int sz[100];
    int n,i;
    scanf("%d\n",&n);
    if((n>1)&&(n<100))
        {
	    for(i=0;i<n;i++)
		{
		scanf("%d",&(sz[i]));
		}
        }
	int e,k,j;
	for(k=1;k<n;k++)
	{
		for(j=0;j<(n-k);j++)
		{
		    if(sz[j]>sz[j+1])
			{
			    e=sz[j+1];
		             sz[j+1]=sz[j];
			    sz[j]=e;
			}
		}
	}
	printf("%d\n%d\n",sz[n-1],sz[n-2]);
	return 0;
}
