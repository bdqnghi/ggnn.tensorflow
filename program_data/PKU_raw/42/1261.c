int main(int argc, char* argv[])
{
	int n,k,i;
	scanf("%d",&n);
	int *a=(int *)malloc(sizeof (int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	int x=0;
	for(i=0;i<n;i++)
	{
		if(a[i]!=k)
		{
			if(x==0)
			{
				printf("%d",a[i]);
				x++;
			}
			else 
			{
				printf(" %d",a[i]);
			}
		}
	}
	free(a);
	return 0;
}