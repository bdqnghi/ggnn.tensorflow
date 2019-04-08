
int main()
{
	int n, i, j, a[100][60];
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i][0]);
		for(j = 1; j <= a[i][0]; j++)
		{
			scanf("%d", &a[i][j]);
		}
		int num = 60;
		if(a[i][0] == 0)
			printf("60\n");
	    for(j = a[i][0]; j >= 1; j--)
		{
			if(a[i][j] + j * 3 <= 60)
			{
				printf("%d\n", 60 - j * 3 );
				break;
			}
			else if(a[i][j] + j * 3 <= 63)
			{
				printf("%d\n", 60 - (j - 1) * 3 - 63 + a[i][j] + j * 3);
				break;
			}
		}
	}
	return 0;
}

