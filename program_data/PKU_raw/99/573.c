
int main()
{
	int n,i,a[120];
	int less=0,nd=0,rd=0,th=0;
	double k,l,m,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<=18)
			less+=1;
		else if(a[i]>=19&&a[i]<=35)
			nd+=1;
		else if(a[i]>=36&&a[i]<=60)
			rd+=1;
		else if(a[i]>=61)
			th+=1;
	}
	k=(double)less*100/n;
	l=(double)nd*100/n;
	m=(double)rd*100/n;
	t=(double)th*100/n;
	printf("1-18: %.2lf",k);
	printf("%%\n");
	printf("19-35: %.2lf",l);
	printf("%%\n");
	printf("36-60: %.2lf",m);
	printf("%%\n");
	printf("60??: %.2lf",t);
	printf("%%\n");
	return 0;

}