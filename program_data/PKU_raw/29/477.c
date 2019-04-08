int main()
{
	int i,j,m,n[100],a=1,b=2,e;
	double he[100];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n[i]);
	}
	he[0]=0;
	for(i=0;i<m;i++){
		for(j=0;j<n[i];j++){
			he[i]=he[i]+(1.0*b/(a*1.0));
			e=b;
			b=a+b;
			a=e;

		}
		printf("%.3lf\n",he[i]);
		he[i+1]=0;
		a=1;
		b=2;
	}
	return 0;
}