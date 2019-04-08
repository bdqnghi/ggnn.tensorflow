int main ()
{
	int k, m, n, i, j, sum, matrix[100][100];
	scanf("%d", &k);
	while(k>0) {
		k--;
		sum=0;
		scanf("%d%d", &m, &n);
		for(i=0; i<m; i++) {
			for(j=0; j<n; j++)
				scanf("%d", *(matrix+i)+j);
		}
		if (m==1&&n==1)
			printf("%d\n", **matrix);
		else if (m==1) {
			for (i=0; i<n; i++)
				sum+=*(*matrix+i);
			printf("%d\n", sum);
		}
		else if (n==1) {
			for (i=0; i<m; i++)
				sum+=**(matrix+i);
			printf("%d\n", sum);
		}
		else {
			for (i=0; i<n; i++)
				sum+=*(*matrix+i);
			for (i=0; i<n; i++)
				sum+=*(*(matrix+m-1)+i);
			for (i=1; i<m-1; i++)
				sum+=(**(matrix+i)+*(*(matrix+i)+n-1));
			printf("%d\n", sum);
		}
	}
	return 0;
}