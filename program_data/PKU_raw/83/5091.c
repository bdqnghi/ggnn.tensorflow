double jp(int p)
{
	double jp;
	if(p>=90)
		jp=4.0;
	else if(p>=85)
		jp=3.7;
	else if(p>=82)
		jp=3.3;
	else if(p>=78)
		jp=3.0;
	else if(p>=75)
		jp=2.7;
	else if(p>=72)
		jp=2.3;
	else if(p>=68)
		jp=2.0;
	else if(p>=64)
		jp=1.5;
	else if(p>=60)
		jp=1.0;
	else
		jp=0.0;
	return jp;
}
int main()
{
	int n,p;
	scanf("%d",&n);
	int list1[10];
	double list2[10];
	int i;

	for(i=0;i<n;i++)
		scanf("%d",&list1[i]);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p);
		list2[i]=jp(p)*list1[i];
	}

	int sum1=0;
	double sum2;
	for(i=0;i<n;i++)
         sum1+=list1[i];
	for(i=0;i<n;i++)
		sum2+=(list2[i]/sum1);

	printf("%.2f",sum2);
	return 0;
}


