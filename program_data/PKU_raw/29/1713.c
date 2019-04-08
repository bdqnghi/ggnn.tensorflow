int main()
{
	int m;
	int i,j;
	int n;
	double p1=2.0,q1=1.0,p2=3.0,q2=2.0;
	double s,t;
	double sum;
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		scanf("%d",&n);
		if(n>=4)
		{
			sum=2.0/1.0+3.0/2.0+5.0/3.0;
			p1=2.0+3.0;
			q1=1.0+2.0;
			p2=3.0;
			q2=2.0;
			for(j=4;j<=n;j++)
			{
				t=p1;
				p1=p1+p2;
				p2=t;
				s=q1;
				q1=q1+q2;
				q2=s;
				sum=sum+(p1/q1);
			}
			printf("%.3f\n",sum);
		}
		else if(n==3)
		{
			sum=2.0/1.0+3.0/2.0+5.0/3.0;
			printf("%.3f\n",sum);
		}
		else if(n==2)
		{
			sum=2.0/1.0+3.0/2.0;
			printf("%.3f\n",sum);
		}
		else
		{
			sum=2.0/1.0;
			printf("%.3f\n",sum);
		}
	}
	
	return 0;
}
				




