
int count[10000];

int main()
{
	int i,j;
	int k;
	int num[1000];
	scanf("%d",&k);
	for(i=0; i<k; i++)
		scanf("%d", &num[i]);
	for(i=0; i<k; i++)
	{
		if(count[num[i]]==0)
		{
			count[num[i]]=1;
			printf("%d",num[i]);
			break;
		}
	}
	for(; i<k; i++)
	{
		if(count[num[i]]==0)
		{
			count[num[i]]=1;
			printf(",%d",num[i]);
		}
	}

	return 0;
}