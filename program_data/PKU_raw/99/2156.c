int main()
{
	double q,a1=0,a2=0,a3=0,a4=0;
	int n,i;
	scanf("%d",&n);
	q=(double)n;
	for(i=0;i<n;i++)
	{
		int w;
		scanf("%d",&w);
		if(w<=18)	a1=a1+1;
		else if(w<36) a2=a2+1;
		else if (w<61) a3=a3+1;
		else a4=a4+1;
	}
	printf("1-18: %.2f%%\n19-35: %.2f%%\n36-60: %.2f%%\n60??: %.2f%%\n",a1*100/q,a2*100/q,a3*100/q,a4*100/q);
	return 0;
}