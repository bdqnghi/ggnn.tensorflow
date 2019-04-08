
int main() {
	int m, n, c;
	int mark[1010]={0};
	scanf("%d%d",&m,&n);
	while (m > 0) {
		mark[m] = 1;
		m /= 2;
	}
	while (n > 0) {
		if (mark[n] != 0) {
			printf("%d\n",n);
			break;
		}
		n /= 2;
	}
}