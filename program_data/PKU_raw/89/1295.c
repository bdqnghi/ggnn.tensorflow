
int main()
{
	int n, i, j, k;
	char **map;
	
	scanf("%d", &n);
	map = (char**)malloc(n*sizeof(char*));
	for(i=0; i<n; i++)
		map[i] = (char*)malloc(n*sizeof(char));
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
		{
			if(i==j)
				map[i][j] = 1;
			else
				map[i][j] = 0;
		}
	while(scanf("%d %d", &i, &j) && i+j!=0)
		map[i][j] = 1;
	
	k = 0;
	for(j=1; j<n; j++)
	{
		if(map[k][j] == 1)
			k = j;
	}
	for(i=0; i<k; i++)
	{
		if(map[i][k]==0 || map[k][i]==1)
		{
			printf("NOT FOUND");
			for(i=0; i<n; i++)
				free(map[i]);
			free(map);
			return 0;
		}
	}
	printf("%d", k);
	for(i=0; i<n; i++)
		free(map[i]);
	free(map);
	return 0;
}