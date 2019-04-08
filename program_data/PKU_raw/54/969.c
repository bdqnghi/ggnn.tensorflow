int time,k,n;

void calc(int fruit)
{
	
	if (fruit<1)
		time = -2;
	if ((time!=-2)&&(time!=-3))	
		if ((fruit%n==k))
		{
			time --;
			if ((time==0)&&(fruit-fruit/n-k>0))
			{
				time = -3;
			}
			else
			{
				calc(fruit-fruit/n-k);
			}
	}
}
int main()
{
	int i;

	scanf("%d%d",&n,&k);
	for (i=1;;i++)
	{
		time = n;
		calc(i);
		if ((time==-3))
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}