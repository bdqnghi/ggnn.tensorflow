void main()
{
	long n;
	scanf("%ld",&n);
	struct student
{
	int num;
	int chi;
	int math;
	int sum;
}stu[100000];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&stu[i].num,&stu[i].chi,&stu[i].math);
		stu[i].sum=stu[i].chi+stu[i].math;
	}
	struct student blank;
	for(i=0;i<n;i++)
	{
		if(stu[i].sum>stu[0].sum)
		{
			blank=stu[0];
			stu[0]=stu[i];
			stu[i]=blank;
		}
	}
	for(i=1;i<n;i++)
	{
		if(stu[i].sum>stu[1].sum)
		{
			blank=stu[1];
			stu[1]=stu[i];
			stu[i]=blank;
		}
	}
	for(i=2;i<n;i++)
	{
		if(stu[i].sum>stu[2].sum)
		{
			blank=stu[2];
			stu[2]=stu[i];
			stu[i]=blank;
		}
	}
	for(i=0;i<=2;i++)
		printf("%d %d\n",stu[i].num,stu[i].sum);
}



			






	
			


