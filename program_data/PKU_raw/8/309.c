int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int c[100];
	int d[100];
	int i,t,r;
	i=0;
	do
	{
		scanf("%d",&c[i]);
		i++;
	}while(i<a);
	i=0;
	do
	{
		scanf("%d",&d[i]);
		i++;
	}while(i<b);
	t=0;
	do
	{
		i=0;
		while(i<a-1-t)
		{
			if(c[i]>c[i+1])
			{
				r=c[i];
				c[i]=c[i+1];
				c[i+1]=r;
			}
			i++;
		}
		t++;
	}while(t<a-1);
	t=0;
	do
	{
		i=0;
		while(i<b-1-t)
		{
			if(d[i]>d[i+1])
			{
				r=d[i];
				d[i]=d[i+1];
				d[i+1]=r;
			}
			i++;
		}
		t++;
	}while(t<b-1);
	printf("%d",c[0]);
	i=1;
	do
	{
		printf(" %d",c[i]);
		i++;
	}while(i<a);
	i=0;
	do
	{
		printf(" %d",d[i]);
		i++;
	}while(i<b);
	return 0;
}
