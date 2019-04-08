
int main(void){
	int m;
	scanf("%d", &m);
	while(m--){
		int n, i;
		double res = 0;
		double temp1 = 1.0, temp2 = 2.0;
		scanf("%d", &n);
		for(i = 0; i < n; ++i){
			res = res + temp2/temp1;
			temp2 += temp1;
			temp1 = temp2 - temp1;
		}
		printf("%.3lf\n", res);
	}
}