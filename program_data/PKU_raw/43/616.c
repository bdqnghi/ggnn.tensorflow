int main ()
{
	int m;
	int i, j, p;
	int n1, n2;
	scanf("%d", &m);
	for (n1=3; n1<=m/2; n1+=2) {
		for (j=3, p=0; j<n1/2; j+=2) {
			if (n1%j==0) {
				p=1;
				break;
			}
		}
		if (p==0) {
			n2=m-n1;
			for (j=3; j<n2/2; j+=2) {
			if (n2%j==0) {
				p=1;
				break;
				}
			}
			if (p==0) {
				printf("%d %d\n", n1, n2);
			}
		}
	}
	return 0;
}