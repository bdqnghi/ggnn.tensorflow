int main()
{
	int a,b[100],c,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		scanf("%d",&b[i]);
	if(b[1]<b[2])
	{
		c=b[1];
		b[1]=b[2];
		b[2]=c;
	}
	else
	{
		if(b[i]>=b[1])
		{
			c=b[2];
			b[2]=b[1];
			b[1]=b[i];
		}
		else
		{
			if(b[i]>=b[2])
			{
				c=b[2];
				b[2]=b[i];
			}
		}
	}
	}
	printf("%d\n",b[1]);
	printf("%d\n",b[2]);
	return 0;
}