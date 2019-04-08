
int main(){
	int n, sum;
	int i, j, starti, startj, endi, endj;
	int a[10][10];
	scanf("%d", &n);
	for (i=0;i<n;i++)
		for (j=0;j<n;j++) 
			scanf("%d", &a[i][j]);
	starti = -1;
	startj = -1;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
			if (a[i][j] == 0)
			{
				starti = i;
				startj = j;
				break;
			}
		if (starti>=0) break;
	}
	endi = starti;
	endj = startj;
	while (a[starti][endj+1] == 0) endj++;
	while (a[endi+1][startj] == 0) endi++;
	printf("%d", (endi - starti - 1) * (endj - startj - 1));

	return 0;
}