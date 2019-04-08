
int main()
{
	int m,n;
	int p,q,t,i,j;
	float sum;
	scanf("%d",&m);
	for(i=1;i<=m;i++){
		scanf("%d",&n);
		j=1;
		sum=0;
		p=2;
		q=1;
		do{
			sum=sum+(float)p/q;
			t=p;
			p=p+q;
			q=t;
			j=j+1;
		}
		while(j<=n);
		printf("%.3lf\n",sum);
	}
}
