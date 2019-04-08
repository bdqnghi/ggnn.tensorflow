int main(int argc, char* argv[])
{
	int n,k,i,j;
	int sz[1000];
	int tag=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&sz[i]);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
			if(sz[i]+sz[j]==k)
				tag=1;
	}
	if(tag)
		printf("yes");
	else 
		printf("no");
	return 0;
}