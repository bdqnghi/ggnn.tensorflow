
int main()
{
	int m,i,j;
	int n[100]={0};
	scanf("%d",&m);

	double a1=2;
	double a2=3;
	double b1=1;
	double b2=2;
	double a3,b3;
	double slot;
	double sum;
	for(i=0;i<m;i++)
	{
		scanf("%d",&n[i]);
		if(n[i]==1) printf("%.3lf\n",(a1/b1));
		if(n[i]==2) printf("%.3lf\n",(a1/b1)+(a2/b2));
		if(n[i]>2)
		{
			sum=(a1/b1)+(a2/b2);
			for(j=0;j<n[i]-2;j++)
			{
				a3=a1+a2;
				b3=b1+b2;
				sum+=(a3/b3);
				slot=a2;
				a2=a1;
				a1=slot;
				slot=b2;
				b2=b1;
				b1=slot;
				slot=a3;
				a3=a2;
				a2=slot;
				slot=b3;
				b3=b2;
				b2=slot;
			}
			printf("%.3lf\n",sum);
			a1=2;
			a2=3;
			b1=1;
			b2=2;
			sum=(a1/b1)+(a2/b2);
		}
	}

	return 0;
}


