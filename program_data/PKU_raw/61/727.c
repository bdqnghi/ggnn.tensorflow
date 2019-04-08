int main(int argc, char* argv[])
{
	int a,b,c,n;
	int sz[20];
	int wt[20];
	sz[1]=1;
	sz[2]=1;
	scanf("%d",&n);
	for(a=0;a<n;a++)
	{
		scanf("%d",&wt[a]);
	}
	for(a=0;a<=n;a++)
	{
		b=wt[a];
		if(b==1)
		{
			printf("%d\n",sz[1]);
		}
		else if(b==2)
		{
			printf("%d\n",sz[2]);
		}
		else if(b>=3)
		{
			for(c=3;c<=b;c++)
			{
				sz[c]=sz[c-2]+sz[c-1];
			}
				printf("%d\n",sz[b]);
		}
	}
	return 0;
}
