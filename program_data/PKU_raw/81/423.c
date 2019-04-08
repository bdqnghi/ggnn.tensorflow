
int check(int (*arr)[5], int n, int m)
{
	int i,t;
	if (n<0||n>=5||m<0||m>=5) return 0;
	for (i=0; i<5; ++i) 
	{
		t=arr[n][i]; arr[n][i]=arr[m][i]; arr[m][i]=t;
	}
	return 1;
}

int main() {
	int arr[5][5];
         int check(int (*arr)[5], int n, int m);
         int i,j;
	int n,m;
	for (i=0; i<5; ++i) for (j=0; j<5; ++j) scanf("%d", &arr[i][j]);
	scanf("%d %d", &n, &m);
	if (check(arr, n, m)==0) 
	{
		printf("error\n");
		return;
	}
	for (i=0; i<5; ++i) 
	{
		for (j=0; j<4; ++j) printf("%d ", arr[i][j]);
		printf("%d\n", arr[i][4]);
	}
	scanf("%d", &i);
}