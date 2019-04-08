

int main(int argc, char* argv[])
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year[5],mon[5],day[5],sum=0,i,j;
	for (j=0;j<5;j++)
	scanf("%d%d%d",&year[j],&mon[j],&day[j]);
	for (j=0;j<5;j++)
	{
		if (year[j]%400==0) a[1]=29;
		else if (year[j]%4==0)
		{
			if (year[j]%100==0)
				a[1]=28;
			else a[1]=29;
		}
		for (i=0;i<=(mon[j]-2);i++)
			sum=sum+a[i];
		sum=sum+day[j];
		printf("%d\n",sum);
		sum=0;
	}
	return 0;
}