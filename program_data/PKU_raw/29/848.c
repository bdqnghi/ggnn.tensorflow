int main(){
	int n,m,i,k;
	double a,b,c,e,f;
	scanf("%d\n",&m);
	for(k=0;k<m;k++)
	{
		scanf("%d\n",&n);
		a=2,b=1,c=0;
		for(i=0;i<n;i++)
		{
			c=c+a/b;
			e=a+b;
			f=a;
			a=e;
			b=f;
		}
		printf("%.3lf\n",c);
	}
	return 0;
}
