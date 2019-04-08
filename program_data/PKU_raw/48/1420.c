
int main()
{
	int stat[2][11][11];	
	int m, n;
	int i, j, k;
	int tmp1, tmp2;

	scanf("%d %d", &m, &n);
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 11; j++) {
			for (k = 0; k < 11; k++) {
				stat[i][j][k] = 0;
			}
		}
	}
	stat[0][5][5] = 1;

	for (i = 0; i < n; i++) {	
		tmp1 = i % 2;
		tmp2 = (i + 1) % 2;
		for (j = 1; j <= 9; j++) {	
			for (k = 1; k <= 9; k++) {
				stat[tmp2][j][k] = stat[tmp1][j - 1][k - 1] + stat[tmp1][j - 1][k]
					+ stat[tmp1][j - 1][k + 1] + stat[tmp1][j][k - 1]
					+ stat[tmp1][j][k] * 2 + stat[tmp1][j][k + 1]
					+ stat[tmp1][j + 1][k - 1] + stat[tmp1][j + 1][k]
					+ stat[tmp1][j + 1][k + 1];
			}
		}
	}

	i = n % 2;
	for (j = 1; j <= 9; j++) {	
		for (k = 1; k <= 9; k++) {
			printf("%d", m * stat[i][j][k]);
			if(k!=9)
			printf(" ");
		}
		printf("\n");
	}

	return 0;
}