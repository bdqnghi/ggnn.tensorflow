int main()
{
	int a,b,c,d,e,f;
	int m,n,sum;
	while(1)
	{
		sum=0;
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
		{
			return 0;
		}
		d+=12;
		sum=(d-a)*3600;
		m=b*60+c;
		n=e*60+f;
		sum+=(n-m);
		printf("%d\n",sum);
	}
	return 0;
}
		




