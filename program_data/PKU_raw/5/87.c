int main()
{
	int i,j,time=0;
	double p;
	char a[501],b[501];
	char c[5]="ATCG";
	scanf("%lf",&p);
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=c[0]&&a[i]!=c[1]&&a[i]!=c[2]&&a[i]!=c[3])
		{
			printf("error");
			return 0;
		}
	}
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=c[0]&&a[i]!=c[1]&&a[i]!=c[2]&&a[i]!=c[3])
		{
			printf("error");
			return 0;
		}
	}
	if(strlen(a)!=strlen(b))
	{
		printf("error");
		return 0;
	}
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==b[i])
		{
			time++;
		}
	}
	if(p<(double)time/strlen(a)||p==(double)time/strlen(a))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}


