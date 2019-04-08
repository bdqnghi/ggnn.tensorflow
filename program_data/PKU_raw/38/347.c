int main()
{
	struct shu{
		int n;
		double x[101];
	}pp[100];
		int k,i,j;
	double a1=0,a2=0;
		double s=0,S;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		s=0;
		S=0;
		a1=0;
		a2=0;
		scanf("%d",&pp[i].n);
		for(j=0;j<pp[i].n;j++)
		{
			scanf("%lf",&pp[i].x[j]);
			a1+=pp[i].x[j];
		}
		a2=a1/pp[i].n;
		for(j=0;j<pp[i].n;j++)
		{
			s+=(pp[i].x[j]-a2)*(pp[i].x[j]-a2);
		}
		S=sqrt(s/pp[i].n);
		printf("%.5f\n",S);
	}
	return 0;
}

		


	    