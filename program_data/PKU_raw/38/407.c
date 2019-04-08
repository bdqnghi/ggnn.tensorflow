
int main ()
{
	int k,i,j,t,m;
	double a,s,shu;
	double *p,*sm;
	scanf("%d\n",&k);
	p=(double*)malloc(sizeof(double)*101);
	sm=(double*)malloc(sizeof(double)*k);
    for(i=0;i<k;i++)
	{
		scanf("%lf\n",&shu);
		p[0]=shu;
		a=0;
		for(j=1;j<=p[0];j++)
		{
             scanf("%lf",&p[j]);
			 a+=p[j];
		}
		a=a/p[0];
		s=0;
		for(t=1;t<=p[0];t++)
		{
			s+=(p[t]-a)*(p[t]-a);
		}
		s=s/p[0];
		s=sqrt(s);
        sm[i]=s;
	}
	for(m=0;m<k;m++)
	{
		printf("%.5lf\n",sm[m]);
	}
	free(p);
	free(sm);
	return 0;
}