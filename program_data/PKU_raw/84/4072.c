
int main()
{
	int a, b, max1, max2;
	int n, i, temp;
	scanf("%d %d %d", &n, &a, &b);
	if(a>b)
	{
		max1=a;
		max2=b;
	}
	else
	{
		max1=b;
		max2=a;
	}
	for(i=0; i<n-2; i++)
	{
		scanf("%d", &temp);
		if(temp>max1)
		{
			max2=max1;
			max1=temp;
		}
		else if(temp>max2)
		{
			max1=max1;
			max2=temp;
		}
		else
		{
		   max1=max1;
		   max2=max2;	   
		}
	}
	printf("%d\n%d", max1, max2);
	return 0;
}
	
