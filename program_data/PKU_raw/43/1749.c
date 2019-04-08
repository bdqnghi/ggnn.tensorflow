int main()
{
	int m,a,b,f,j;
	scanf("%d",&m);
	for(a=3;a<=m/2;a=a+2)
	{
		f=1;
		for(j=2;j<a;j++)
		{
			if(a%j==0)
			{
				f=0;
				break;
			}
		}
		if(f==0)
			continue;
		b=m-a;
		f=1;
		for(j=2;j<b;j++)
		{
			if(b%j==0)
			{
				f=0;
				break;
			}
		}
		if(f)
			printf("%d %d\n",a,b);
	}

	return 0;
}
