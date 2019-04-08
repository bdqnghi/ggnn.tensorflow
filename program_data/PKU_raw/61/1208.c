

int main()
{
	int shu[20],fei[20],chu[20];
	int n,i,j,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&shu[i]);
	}
	fei[0]=1;
	fei[1]=1;
	for(j=2;j<20;j++)
	{
		fei[j]=fei[j-1]+fei[j-2];
	}
	for(b=0;b<n;b++)
	{
		chu[b]=fei[shu[b]-1];
		printf("%d\n",chu[b]);
	}
	return 0;
}
