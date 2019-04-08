int data[9000];
int main()
{
	int n;
	int i, j;
	scanf("%d",&n);
	scanf("%d%d",&i,&j);
	while((i != 0)||(j != 0))
	{
		data[i] = -1;
		data[j]++;
		scanf("%d%d",&i,&j);
	}
	for (i = 0; i < n; i++)
	{
		if (data[i] == n-1)
		{
			printf("%d\n",i);
			break;
		}
	}
	if (i == n)
		printf("NOT FOUND\n");
	return 0;
}