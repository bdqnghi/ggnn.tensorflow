
void sum(int n) {
	int front=1;
	int temp;
	int top=2, bottom=1;
	double sum=0;
	int i;
	for (i=0; i<n; i++) {
		sum+=(double)top/front;
		temp=top;
		top+=front;
		front=temp;
	}
	printf("%.3lf\n",sum);
}

int main()
{
	int m, n;
	scanf("%d",&m);
	int i;

	for (i=0; i<m; i++) {
		scanf("%d",&n);
		sum(n);
	}
	return 0;
}
