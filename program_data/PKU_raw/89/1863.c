
int main()
{
	int n;
	int *exclusion;
	int *refCount;
	int a,b;
	int i;
	int found;
	scanf("%d",&n);
	exclusion=(int*)malloc(sizeof(int)*n);
	refCount=(int*)malloc(sizeof(int)*n);
	memset(exclusion,0,sizeof(int)*n);
	memset(refCount,0,sizeof(int)*n);
	
	while(1)
	{
		scanf("%d %d",&a,&b);
		if (a==0 && b==0) break;
		exclusion[a]=1;
		refCount[b]++;
	}	
	
	found=0;
	for (i=0;i<n;i++)
		if (!exclusion[i] && refCount[i]>=n-1) {printf("%d\n",i); found=1;}
	
	if (!found) printf("NOT FOUND\n");

	free(exclusion);
	free(refCount);

	return 0;
}
