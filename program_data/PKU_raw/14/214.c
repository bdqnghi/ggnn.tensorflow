struct stu
{
	int id;
	int Chinese;
	int math;
}a[100000];
void main()
{
	int n,i,first,second,third,h1=0,h2=0,h3=0,e;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&a[i].id,&a[i].Chinese,&a[i].math);
	}
	first=0;
	second=0;
	third=0;
	for(i=0;i<n;i++)
	{
		if(first<(a[i].Chinese+a[i].math))
		{
			third=second;
			h3=h2;
			second=first;
			h2=h1;
			first=a[i].Chinese+a[i].math;
			h1=a[i].id;
		}
		else if(first==(a[i].Chinese+a[i].math)&&first>second)
		{
			third=second;
			h3=h2;
			h2=a[i].id;
			second=a[i].Chinese+a[i].math;
		}
		else if(first==(a[i].Chinese+a[i].math)&&first==second&&second>third)
		{
			third=a[i].Chinese+a[i].math;
			h3=a[i].id;
		}
		else if(first>(a[i].Chinese+a[i].math)&&second<(a[i].Chinese+a[i].math))
		{
			third=second;
			h3=h2;
			second=a[i].Chinese+a[i].math;
			h2=a[i].id;
		}
		else if(second>(a[i].Chinese+a[i].math)&&third<(a[i].Chinese+a[i].math))
		{
			third=a[i].Chinese+a[i].math;
			h3=a[i].id;
		}
	}
	printf("%d %d\n%d %d\n%d %d",h1,first,h2,second,h3,third);
}