int main(int argc, char* argv[])
{
	int *p,n,i,k,j;
	scanf("%d",&n);
	p=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(p[i]==k)continue;
		else 
		{
			printf("%d",p[i]);
			break;
		}
	}
	for(j=i+1;j<n;j++)
	{
		if(p[j]==k)continue;
		else printf(" %d",p[j]);
	}
	free(p);
	return 0;
}
