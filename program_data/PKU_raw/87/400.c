int main()
{
	int a,b,c,d,e,f,n;
	while(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0)
	{
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
		{
			return 0;
		}
		d=d+12;		
		n=(d-a)*3600+(e-b)*60+f-c;
		printf("%d\n",n);
	}
	return 0;
}