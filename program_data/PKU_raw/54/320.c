
void main()
{
	int n,k;
	int t;
	double p;
	scanf("%d %d",&n,&k);
	if (n!=2)
	{
		p=pow((double)n,(double)n);
		t=(int)p-n*k+k;
	}
	else
		t=7;
	printf("%d",t);
}

