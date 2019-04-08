int main()
{
	int i;
	for(i=0;i!=-1;i++)
	{
		
		int a,b,c,d,e,f;
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
		{
			return 0;
		}
		else
		{
		printf("%d\n",3600*(11-a)+60*(59-b)+60-c+d*3600+e*60+f);
		}
	}
	return 1;
}