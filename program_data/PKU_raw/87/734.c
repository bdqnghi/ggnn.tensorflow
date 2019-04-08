int main()
{
	int a,b,c,d,e,f,sum=0;
	while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f))
	{
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
			break;
		sum=0;
		if(f>=c)
	{
		sum=sum+f-c;
	}
	else if(f<c)
	{
		sum=sum+f+60-c;
		e--;
	}
	if(e>=b)
	{
		sum=sum+(e-b)*60;
	}
	else if(e<b)
	{
		sum=sum+(60+e-b)*60;
		d--;
	}
	sum=sum+(d+12-a)*3600;
	printf("%d\n",sum);}
return 0;
}