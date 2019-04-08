int main()
{
	int n,a,b,p,c;
         int d=0;
	int i=0;
	int max(int x,int y);
	scanf("%d",&n);//????n
	for(p=1;p<=n;p++)
	{
		scanf("%d %d ",&a,&b);//????
		if(90<=a&a<=140)
		{
			if(60<=b&b<=90)
			{
				i=i+1;
			}
			else
			{
				i=0;
			}
		}
		else
		{
			i=0;
		}
		c=i;
		d=max_int(d,c);
	}
	printf ("%d\n",d);
	return 0;
}
int max_int(int x,int y)
{
	int z;
	if(x>y)
	{
		z=x;
	}
	else
	{
		z=y;
	}
	return(z);
}