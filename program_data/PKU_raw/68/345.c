
int f(int i)
{
	int j,s=1;
	if(i%2==0)s=0;
	for(j=3;j<=(int)sqrt(i);j+=2)
	{
		if(i%j==0)s=0;
	}
	return (s);
}
void main()
{
	int n,a,i;
	scanf("%d",&n);
	int f(int i);
	for(a=6;a<=n;a+=2)
	{
		for(i=2;i<=(a/2);i++)
		{
			if(f(i)==1 && f(a-i)==1)
			{
				printf("%d=%d+%d\n",a,i,(a-i));break;
			}
		}
	}
}
