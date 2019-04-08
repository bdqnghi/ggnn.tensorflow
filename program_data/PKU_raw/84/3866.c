int main()
{
	int n, max1, max2,i;
	int num[100]={0};
	max1 = 0;
	max2 = 0;
	scanf("%d" , &n);
	scanf("%d%d", &num[0],&num[1]);
	if (num[0] >= num[1])
	{
		max1 = num[0];
		max2 = num[1];
	}
	else
	{
		max1 = num[1];
		max2 = num[0];
	}
    for (i = 2; i < n; i++)
	{
		scanf("%d" ,&num[i]);
		if (num[i] > max1)
		{
			max2 = max1;
			max1 = num[i];
		}
		else if (num[i] >max2)
		{
			max2 = num[i];
		}
		else
		{
			continue;
		}
	}
		printf("%d\n%d\n", max1,max2);
		return 0;
}