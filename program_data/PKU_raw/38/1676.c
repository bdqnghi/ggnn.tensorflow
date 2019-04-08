int main()
{
	int k,n;
    double x[105]={0},a,s,*p;
	scanf("%d",&k);
	for(;k-->0;)
	{
		a=s=0;p=x;
		scanf("%d",&n);
		for(;p<x+n;p++)
		{scanf("%lf",p);a+=*p;}
		a=a/n;
		p=x;
		for(;p<x+n;p++)
		{s+=(*p-a)*(*p-a);}
		s=s/n;s=sqrt(s);
		printf("%.5f\n",s);}
}
