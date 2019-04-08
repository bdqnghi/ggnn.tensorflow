int runnian(int y)
{
	if(y%400==0||(y%100!=0&&y%4==0))
	{return 1;}
	else
	{return 0;}
}
int main()
{
	int n,j,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int a[200],b[200],c[200];
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
		int yue[12]={31,28,31,30,31,30,31,31,30,31,30,31};	
		int sum=0;
		if(runnian(a[i]))
		{
			yue[1]=29;
		}
		int max,min;
		if(b[i]<c[i])
		{max=c[i];min=b[i];}
		if(b[i]>c[i])
		{max=b[i];min=c[i];}
		for(j=min-1;j<max-1;j++)
		{
			sum+=yue[j];
		}
		if(sum%7==0)
		{
			printf("YES\n");
		}
		else
		{printf("NO\n");}
	}
	return 0;
}
			