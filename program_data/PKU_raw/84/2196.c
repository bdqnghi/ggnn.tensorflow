int main()
{
	int a;
	scanf("%d",&a);
	int i,b,t,x,y;
	for(i=1;i<=a;i++)
	{
		scanf("\n%d",&b);
		if(b>=t)
		{	
			x=t;
			t=b;
		}
		else
		{	
			if(b>=x)
		    x=b;
		}
	}
	printf("%d\n%d",t,x);
	return 0;
}
