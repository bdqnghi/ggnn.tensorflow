int data[K];
int ju[K][K];
int weight[K];


int main(int argc, char *argv[])
{
	int n = 0;
	int i = 0;
	int j = 0;
	int max = 0;

	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	scanf("%d", &n);
	memset(ju, 0, sizeof(ju));
	for(i = 0; i< n; i++)
	{
		scanf("%d", &data[i]);
		weight[i] = 1;
	}

	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n;j++)
		{
			if(data[i] >= data[j])
			{
				ju[i][j] = 1;
			}
		}
	}
	for(i=n-2; i>=0; i--)
	{
		for(j=i+1; j<n; j++)
		{
			if(ju[i][j])
			{
				if(weight[i] < weight[j] + 1)
				{
					weight[i] = weight[j]+1;
				}
			}
		}
	}
	max =0 ;
	for(i=0; i<n;i++)
	{
		if(max < weight[i])
			max =weight[i];
	}
	printf("%d\n", max);


	
	
	return 0;
}