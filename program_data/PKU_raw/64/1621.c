int x[20], y[20], z[20],p[1100];
int main() {
	int i, n, j, plen;
	for (plen = 0, scanf("%d", &n), i = n - 1; i >= 0; i--) {
		scanf("%d%d%d", &x[i], &y[i], &z[i]);
		for (j = n - 1; j > i; j--, plen++)
			p[plen] = ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j])+ (z[i] - z[j]) * (z[i] - z[j])) * 1000
			           + i * 20 + j;
	}
	for (i=0;i<plen;i++){
		for (j=i+1;j<plen;j++)
			if (p[i]<p[j]){
				n=p[i];
				p[i]=p[j];
				p[j]=n;
			}
	printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[p[i]%20],y[p[i]%20],z[p[i]%20], x[(p[i]%1000)/20],y[(p[i]%1000)/20],z[(p[i]%1000)/20],sqrt(p[i]/1000));
	}
}
