int cmp(const void * a, const void * b);
int main()
{
	int n;
	scanf("%d",&n);
	int *arr =  (int *) malloc (sizeof(int) * n);
	int i;
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	qsort(arr,n,sizeof(arr[0]),cmp);
	printf("%d\n",arr[n-1]);
	printf("%d\n",arr[n-2]);
	scanf("%d",&n);
	return 0;
}
int cmp(const void * a, const void * b)
{
	return ((*(int*)a-*(int*)b>0)?1:-1);
}