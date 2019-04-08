


int main()
{
	int list1[1000];
	int list2[1000];
	scanf("%d",&list1[0]);
	int count=1;
	while(scanf(",%d",&list1[count++])!=0);
	count--;
	int index=1;
	scanf("%d",&list2[0]);
	while(scanf(",%d",&list2[index++])!=0);

	int max=0;
	int num=0;
	int i=0;
	for(i=0;i<1000;i++)
	{
		num=0;
		for(index=0;index<count;index++)
		{
			if(i>=list1[index] && i<list2[index])
				num++;
		}
		if(num>max)
			max=num;
	}

	printf("%d %d",count,max);
	return 0;
}