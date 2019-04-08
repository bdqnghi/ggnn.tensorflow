int main()
{
	int n,m,a[12]={0},i;
	scanf("%d",&n);
	m=(n+5)%7;
	if(m==5)
	{
		printf("%d\n",1);
	}
	a[2]=(m+3)%7;
	a[3]=a[2];
	for(i=4;i<13;i++)
	{
		if(i==5||i==7||i==10||i==12)
		{
			a[i]=(a[i-1]+2)%7;
		}
		if(i==4||i==6||i==8||i==9||i==11)
		{
			a[i]=(a[i-1]+3)%7;
		}
	}
	for(i=2;i<13;i++)
	{
		if(a[i]==5)
			printf("%d\n",i);
	}
	return 0;
}
