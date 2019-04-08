
int main()
{
	int n,i;
	double result[1000][3];
	double a, b, c;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%lf%lf%lf", &a, &b ,&c);
		if (b*b-4*a*c>0)
		{   result[i][0]=1;
			result[i][1]=(-b + (sqrt(b*b-4*a*c)))/(2*a);
			result[i][2]=(-b - (sqrt(b*b-4*a*c)))/(2*a); 
		}
		else if (b*b-4*a*c<0)
		{
			result[i][0]=2;
			result[i][1]=(-b)/(2*a);
			result[i][2]=(sqrt(4*a*c-b*b))/(2*a);
		}
		else
		{
			result[i][0]=3;
			result[i][1]=(-b + sqrt(b*b-4*a*c))/(2*a);
		}
	}
    for (i=0;i<n;i++)
	{
		if ((int)result[i][0]==1)
		{
			printf("x1=%.5f;x2=%.5f\n", result[i][1],result[i][2]);
		}
		else if ((int)result[i][0]==2)
		{
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", result[i][1],result[i][2],result[i][1],result[i][2]);
		}
		else
		{
			printf("x1=x2=%.5f\n", result[i][1]);
		}
	}
	return 0;
}
