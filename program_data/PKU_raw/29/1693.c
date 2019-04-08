int main()
{
	int m,i,n,k;
	float s=0,j;
	scanf("%d",&m);
		for(i=1;i<=m;i++)
		{
			scanf("%d",&n);
		j=2;
		s=0;
		for(k=1;k<=n;k++)
		{
			s=s+j;
		j=1+1/j;
		}
		printf("%.3f\n",s);
		}
}


