
int n;
int fun(int a[],int b[])
{
	int min1=0;
	int min2=0;
	int max1=n-1;
	int max2=n-1;
	int count=0;
	int sum=0;
	while(count<n)
	{
		count++;
		if(a[max1]>b[max2])
		{
			max1--;
			max2--;
			sum+=200;
		}
		else if(a[max1]<b[max2])
		{
			sum-=200;
			min1++;
			max2--;
		}
		else
		{
			if(a[min1]>b[min2])
			{
				sum+=200;
				min1++;
				min2++;
			}
			else if(a[min1]<b[max2])
			{
				sum-=200;
				min1++;
				max2--;
			}
			else if(a[min1]==b[max2])
			{
				sum+=0;
				min1++;
				max2--;
			}
		}

	}
	return sum;
}

int main()
{
	int i;
	int a[1005],b[1005];
	while(scanf("%d",&n)&&n)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);
		sort(a,a+n);
		sort(b,b+n);
		printf("%d\n",fun(a,b));
	}
	return 0;
}