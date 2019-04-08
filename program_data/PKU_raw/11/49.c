int main ()
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int j,k,l;
	scanf("%d%d%d",&j,&k,&l);
	if(j%4==0)
	{
		if(j%100!=0)
		{
			a[1]=29;
		}
		else if(j%100==0&&j%400==0)
		{
			a[1]=29;
		}
		if(j%100==0&&j%400!=0)
		{
			a[1]=28;
		}
	}
	int sum=0;
	int m;
	for (m=0;m<k-1;m++)
	{
		sum=sum+a[m];
	}
	sum=sum+l;
	printf("%d",sum);
	return 0;
}