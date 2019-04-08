int main()
{
	int c,d,e,f=0,i;
	scanf("%d",&e);
	for (i=1;i<=e;i++)
	{
		c=i/10;
		d=i-c*10;
		if (c!=0&&d!=0&&c%7!=0&&d%7!=0&&i%7!=0)
		{
			f=f+i*i;
		}
		else if (c==0&&i%7!=0)
		{
			f=f+i*i;
		}
		else if (c!=0&&d==0&&i%7!=0)
		{
			f=f+i*i;
		}
	}
	printf("%d\n",f);
	return 0;
}