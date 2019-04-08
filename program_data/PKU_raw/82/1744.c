int main()
{
	int n,i,time,max;
	time=0;
	max=0;
	scanf("%d",&n);
	int a,b;
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90)
		{
		time++;
			if(time>max)
			{
		    max=time;
			}
			else
			{
			max=max;
			}
						
		}
		else
		{
			if(time>max)
			{
		    max=time;
			}
			else
			{
			max=max;
			time=0;
			}
		}
	}
	printf("%d",max);
	return 0;
}