

int r(int a, int b)
{
	int i,j;
	if(a<10)
	{
		return (b+a);
	}
	int sum=1;
	for(i=1;;i++)
	{
		if(sum>a)
		{
			break;}
		sum*=10;
	}
	b+=(a%10)*(sum/10);
	return (r(a/10,b));
}
	





int main()
{
	int a;
	int i;
	for(i=0;i<6;i++)
	{
		scanf("%d",&a);
		if(a<0)
		{
			a=-a;
			printf ("%d\n",-r(a,0));
		}
		else
		{
			printf ("%d\n",r(a,0));
		}
	}
		return 0;
}



