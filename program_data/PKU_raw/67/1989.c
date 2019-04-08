
int main()
{
	int n, i;
	int a[1000], b[1000];

	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d%d", &a[i], &b[i]);
	}
	for(i = 1; i < n; i++)
	{
		if((b[i]*1.0)/a[i] - (b[0]*1.0)/a[0] > 0.05)
			printf("better\n");
		else if((b[0]*1.0)/a[0] - (b[i]*1.0)/a[i] > 0.05)
			printf("worse\n");
		else 
			printf("same\n");
	}



	return 0;
}

