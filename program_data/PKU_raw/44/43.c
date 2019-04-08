void main()
{
	int num[6];
	int i;
	int fuck(int a,int n);
	int reverse(int x);
	for(i=0;i<6;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<6;i++)
	{
		num[i]=reverse(num[i]);
		printf("%d\n",num[i]);
	}
}
int reverse(int x)
{
	int y=0,z;//z ti huan x
	int j,k,m;
	int w=0;//??
	int b[20]={0};
	if (x>0)
	{
		z=x;
		for(j=0;j<=20;j++)//20?
		{
			z=z/10;
			w++;
			if (z==0)
			{
				break;
			}
		}
		for(k=0;k<w;k++)
		{
			b[w-k-1]=x/(fuck(10,(w-k-1)));
			x=x-b[w-k-1]*(fuck(10,(w-k-1)));//b0= ge wei;b1=10 wei
		}
		for(m=0;m<w;m++)
		{
			if(b[m]!=0)
			{
				y+=b[m]*(fuck(10,w-m-1));
			}
		}
	}
	if (x<0)
	{
		x=(0-x);
		z=x;
		z=x;
		for(j=0;j<=20;j++)//20?
		{
			z=z/10;
			w++;
			if (z==0)
			{
				break;
			}
		}
		for(k=0;k<w;k++)
		{
			b[w-k-1]=x/(fuck(10,(w-k-1)));
			x=x-b[w-k-1]*(fuck(10,(w-k-1)));//b0= ge wei;b1=10 wei
		}
		for(m=0;m<w;m++)
		{
			if(b[m]!=0)
			{
				y+=b[m]*(fuck(10,w-m-1));
			}
		}
		y=(0-y);
	}
	return(y);
}
int fuck(int a,int n)
{
	int y;
	int i;
	y=1;
	for (i=1;i<=n;i++)
	{
		y*=a;
	}
	return (y);
}