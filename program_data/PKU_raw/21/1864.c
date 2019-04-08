void main()
{
	int n,a[400],small=0,smalln=0,big=0,bign=0,i;
	float sum=0,average,flag=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	average=sum/n;
	for(i=1;i<=n;i++)
	{

		if((a[i]-average>=flag)||(a[i]-average<=(-flag)))
		{
			if((a[i]-average)>0)
			{
				big=a[i];
				bign=1;
				flag=a[i]-average;
			}
			else
			{
				small=a[i];
				smalln=1;
				flag=average-a[i];
			}
		}
	}
	if(smalln==1&&bign==0)
	{
		printf("%d",small);
	}
	if(smalln==0&&bign==1)
	{
		printf("%d",big);
	}
	if(smalln==1&&bign==1)
	{
		if((big-average)>(average-small))
		{
			printf("%d",big);
		}
		else if((big-average)<(average-small))
		{
			printf("%d",small);
		}
		else
		{
			printf("%d,%d",small,big);
		}
	}
}