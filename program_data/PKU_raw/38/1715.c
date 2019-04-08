int main()
{
	double x[100],t=0,aver,h,s;
	int i,k,n;
	double *p,*p1;
	p1=x;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n);
		for(p=p1;p<p1+n;p++)
			scanf("%lf",p);
		for(p=p1;p<p1+n;p++)
			t=t+(*p);
		aver=t/n;
		t=0;
		for(p=p1;p<p1+n;p++)
		{
			h=(*p-aver)*(*p-aver);
			t=t+h;
		}
		s=sqrt(t/n);
		printf("%.5f\n",s);
		t=0;
		aver=0;
	}
	return 0;
}