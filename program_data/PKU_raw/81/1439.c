
int main()
{
	int a[6][6] = {0};
	int outcome;
	int i, j, m, n;
	int m1, n1;
	int exchange(int b[6][6], int m1, int n1);

	for (i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&m,&n);
	
	outcome = exchange(a, m, n);
	if (outcome == 0){
		printf("error");
	}
	else {
		for(i = 0; i < 5; i++){
			for(j = 0; j < 4; j++){
				printf("%d",a[i][j]);
				printf(" ");
			}
			printf("%d",a[i][4]);
			printf("\n");
		}
	}
	return 0;
}

int exchange(int b[6][6], int m1, int n1){
	int i;
	int c[6] = {0};
	if (m1 < 0 || m1>4 || n1 < 0 || n1 > 4){
		return 0;
	}
	else {
		for (i = 0; i < 5; i++){
			c[i] = b[m1][i];
			b[m1][i] = b[n1][i];
			b[n1][i] = c[i];
		}
		return 1;
	}
}