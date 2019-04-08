
void main()
{
	int n;
	int tag;
	int i, j, k;

	scanf("%d", &n);
	for(i = 6; i <= n; i = i + 2)
	{
		for(j = 3; j < i; ++j)
		{
			tag = 0;
			for(k = 2; k * k <= j; k++)
				if(j % k == 0)
				{
					tag = 1;
					break;
				}
			if(tag == 1)
				continue;
			for(k = 2; k * k <= i - j; k++)
				if((i - j) % k == 0)
				{
					tag = 1;
					break;
				}
			if(tag == 1)
				continue;
			printf("%d=%d+%d\n", i, j, i-j);
			break;
		}
	}
}