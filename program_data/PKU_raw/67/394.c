int main()
{
	int n,i,k;
    int s[10000][2];
	double b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=0;k<2;k++)
		{
	scanf("%d",&s[i][k]);
		}
	}
    b=1.0*s[0][1]/s[0][0];
	for(i=1;i<n;i++)
	{ 
		if(1.0*s[i][1]/s[i][0]>b+0.05)
		{
			printf("better\n");
		}
		else if(1.0*s[i][1]/s[i][0]<b-0.05)
		{
			printf("worse\n");
		}
		else if(1.0*s[i][1]/s[i][0]>=b-0.05&&1.0*s[i][1]/s[i][0]<=b+0.05)
		{
			printf("same\n");
		}
	}
			
		return 0;

}
