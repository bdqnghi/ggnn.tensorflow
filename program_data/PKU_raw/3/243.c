
int main()
{
	int *array, n, k, i, j;
	scanf("%d%d",&n,&k);
	array=(int*)malloc(sizeof(int)*n);

	for (i=0;i<n;i++)
		scanf("%d",array+i);
	for(i=0;i<n-1;i++)
		for(j=i+i;j<n;j++)
			if (array[i]+array[j]==k)
			{
				printf("yes");
				free(array);
				return 0;
			}
	free(array);
	printf("no");
	return 0;
}
