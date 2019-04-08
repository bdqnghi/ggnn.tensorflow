int main()
{
	int n;
	int count=0;
	int a[1000];
	int b[1000];
	int min1,min2,max1,max2;
	int i,num;
	while(scanf("%d",&n)&&n)
	{
		min1=0;
		min2=0;
		max1=n-1;
		max2=n-1;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);
		sort(a,a+n);
		sort(b,b+n);
		count=0;
		num=0;
		while(++count)
		{
			if(count==n+1)
				break;
			if(a[max1]>b[max2])
			{
				num+=200;
				max1--;
				max2--;
			}
			else if(a[max1]<b[max2])
			{
				num-=200;
				min1++;
				max2--;
			}
			else
			{
				if(a[min1]>b[min2])
				{
					min1++;
					min2++;
					num+=200;
				}
				else if(a[min1]==b[max2])
				{
					min1++;
					max2--;
				}
				else
				{
					min1++;
					max2--;
					num-=200;
				}
			}
		}
		printf("%d\n",num);
	}
	return 0;
}