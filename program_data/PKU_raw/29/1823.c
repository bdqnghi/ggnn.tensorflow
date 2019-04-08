int main()
{
	double a[100];
	int n[100];
	int number;
	scanf("%d\n",&number);
	int j;
	for(j=1;j<=number;j++)
		scanf("%d",&n[j]);
	int i;
	for(i=1;i<=number;i++)
	{
		a[1]=1.0;
		a[2]=2.0;
		int k;
		for(k=3;k<=n[i]+1;k++)
		{
			a[k]=a[k-1]+a[k-2];
		}
		double S=0.0;
		int l;
		for(l=1;l<=n[i];l++)
		{
			S=S+a[l+1]/a[l];
		}
		printf("%.3f\n",S);
	}
	return 0;
}

