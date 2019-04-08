
/*
90-100 4.0 
85-89  3.7 
82-84  3.3 
78-81  3.0 
75-77  2.7 
72-74  2.3 
68-71  2.0 
64-67  1.5 
60-63  1.0 
60?? 0
*/
struct P
{
	double a,b,c;
}pos[105];

double getP(int a)
{
	if(a>=90&&a<=100)
		return 4.0;
	else if(a>=85&&a<=89)
		return 3.7;
	else if(a>=82&&a<=84)
		return 3.3;
	else if(a>=78&&a<=81)
		return 3.0;
	else if(a>=75&&a<=77)
		return 2.7;
	else if(a>=72&&a<=74)
		return 2.3;
	else if(a>=68&&a<=71)
		return 2.0;
	else if(a>=64&&a<=67)
		return 1.5;
	else if(a>=60&&a<=63)
		return 1.0;
	return 0.0;
}
int main()
{
	int i,n;
	double sum1,sum2;

	while(scanf("%d",&n)!=EOF)
	{
		sum1=sum2=0.0;
		for(i=0;i<n;i++)
			scanf("%lf",&pos[i].a);
		for(i=0;i<n;i++)
			scanf("%lf",&pos[i].b);
		for(i=0;i<n;i++)
			pos[i].c=getP(pos[i].b);
		for(i=0;i<n;i++)
		{
			sum1+=pos[i].c*pos[i].a;
			sum2+=pos[i].a;
		}
		printf("%.2lf\n",sum1/sum2);
	}
	return 0;
}