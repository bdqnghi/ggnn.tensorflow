int main()
{
	int a;
	scanf("%d",&a);
	int sum=0;
	int i=1;
	while(i<=a)
	{
		if(i%7!=0&&i!=70&&i!=17&&i!=27&&i!=37&&i!=47&&i!=57&&i!=67&&i!=87&&i!=97&&i!=71&&i!=72&&i!=73&&i!=74&&i!=75&&i!=76&&i!=77&&i!=78&&i!=79)
		{
			sum+=i*i;}	
		i++;
	}
printf("%d",sum);
return 0;
}