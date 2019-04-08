int main()
{
	int j1,j2,i,an[10000],bn[10000],shijinzhi=0,changdu;
	char a[10000],b[10000];
	scanf("%d%s%d",&j1,a,&j2);
	changdu=strlen(a);
	for(i=0;i<changdu;i++)
	{
		if(a[i]<123&&a[i]>96)
		{
			an[i]=a[i]-87;
		}
		else if(a[i]<91&&a[i]>64)
		{
			an[i]=a[i]-55;
		}
		else
		{
			an[i]=a[i]-48;
		}
	}
	for(i=0;i<changdu;i++)
	{
		shijinzhi+=an[i]*pow(j1,changdu-1-i);
	}
	for(i=0;;i++)
	{
		bn[i]=shijinzhi%j2;
		shijinzhi=shijinzhi/j2;
		if(shijinzhi==0)
		{
			changdu=i+1;
			break;
		}
	}
	for(i=changdu-1;i>=0;i--)
	{
		if(bn[i]>=0&&bn[i]<10)
			b[changdu-1-i]=bn[i]+48;
		else b[changdu-1-i]=bn[i]+55;
	}
	for(i=0;i<changdu;i++)
	{
		printf("%c",b[i]);
	}
	
	return 0;
}