
int main()
{
	int i, j, n, count;
	float a[20];
	while(1)
	{
		scanf("%f", &a[0]);
		if (a[0] == -1)
			break;
		n=1;
		while(1)
		{
			scanf("%f", &a[n]);
			if (a[n] == 0)
				break;
			n++;
		}
		count=0;
		for (i=0; i<n; i++)
		{
			for (j=i+1; j<n; j++)
			{
				if ((a[i]/a[j]==2.0) || (a[j]/a[i]==2.0))
					count++;
			}
		}
		printf("%d\n", count);
	}

	return 0;
}