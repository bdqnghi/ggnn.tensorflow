int main() 
{ 
	int n,i;
	scanf("%d",&n);
	double s[100][2],z[100];
	for(i=0;i<n;i++)
	{
		scanf("%lf",&s[i][0]);
		scanf("%lf",&s[i][1]);
		z[i]=s[i][1]/s[i][0];
	}
	for(i=1;i<n;i++)
	{
        if(z[i]-z[0]>0.05)
			printf("better\n");
		else if(z[0]-z[i]>0.05)
			printf("worse\n");
		else
			printf("same\n");
	}
	return 0;
}