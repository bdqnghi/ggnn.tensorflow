void main()
{
	double final(int n,int k,int n1,int p);
	int n,k,n1,i;
	double m;
	scanf("%d %d",&n,&k);
	n1=n;
	for(i=1;;i++)
	{
		m=final(n+1,k,n1,(n1-1)*i);
		if(m-(int)m==0) break;
	}
	printf("%.0f\n",m);
}

double final(int n,int k,int n1,int p)
{
	double x;
	if(n==1) x=p;
	else x=final(n-1,k,n1,p)*n1/(n1-1)+k;
	return x;
}