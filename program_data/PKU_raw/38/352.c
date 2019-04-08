int main()
{
    int i,j,m,n;
	double sqplus,plus,x,avr,outcome;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&m);
		sqplus=0;
		plus=0;
		avr=0;
		for (j=1;j<=m;j++)
		{
			scanf("%lf",&x);
			sqplus=sqplus+x*x;
			plus=plus+x;
		}
		avr=plus/m;
		outcome=sqplus-2*plus*avr+m*avr*avr;
		printf("%.5lf\n",sqrt(outcome/m));
	}
	return 0;
}