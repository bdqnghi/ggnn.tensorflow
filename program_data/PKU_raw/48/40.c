int main()
{
	int m, n, i, j, k;
	int a[10][10]={0}, b[10][10]={0};
	scanf("%d %d", &m, &n);
	b[5][5] = m;
	a[5][5] = m;
	for(i=0;i<n;i++){
		for(j=5-i;j<=5+i;j++){
			for(k=5-i;k<=5+i;k++){

				a[j-1][k-1]+=b[j][k];
				a[j-1][k]+=b[j][k];
				a[j-1][k+1]+=b[j][k];
				a[j][k-1]+=b[j][k];
				a[j][k+1]+=b[j][k];
				a[j+1][k-1]+=b[j][k];
				a[j+1][k]+=b[j][k];
				a[j+1][k+1]+=b[j][k];
				a[j][k]+=b[j][k];
			}
		}
		for(j=5-i;j<=5+i;j++){
			for(k=5-i;k<=5+i;k++){

				b[j-1][k-1]=a[j-1][k-1];
				b[j-1][k]=a[j-1][k];
				b[j-1][k+1]=a[j-1][k+1];
				b[j][k-1]=a[j][k-1];
				b[j][k+1]=a[j][k+1];
				b[j+1][k-1]=a[j+1][k-1];
				b[j+1][k]=a[j+1][k];
				b[j+1][k+1]=a[j+1][k+1];
				b[j][k]=a[j][k];
			}
		}
	}
	for(j=1;j<10;j++){
		for(k=1;k<10;k++){
			if(k!=9)
				printf("%d ", a[j][k]);
			else
				printf("%d\n", a[j][k]);
		}
	}
	return 0;
}
