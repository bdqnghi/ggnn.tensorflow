int main()
{
	int m,n[100],i,str;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<m;i++)
	{
		double sum=0;
		int p=1,q=2,t=0;
		while(t<n[i])
		{
			sum+=(double)q/p;
			str=q;
			q=p+q;
			p=str;
			t++;
		}
		printf("%.3lf\n",sum);
	}
	return 0;
}
