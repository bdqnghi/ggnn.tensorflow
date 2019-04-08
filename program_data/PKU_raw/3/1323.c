
int main()
{
	int n,m,i,j,k,p=0;
	scanf("%d%d",&n,&m);
	int sz[1000],pl[1000],a;
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
		pl[i]=sz[i];
	}
	
	for(k=0;k<n;k++)
	{
	     for(j=1;j<n;j++)
		 {
			a=pl[k]+sz[j];
			if(a!=m)
			{
		          p++;
			}
		 }
	}
	if(p==n*(n-1))
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}

	
	return 0;
}

