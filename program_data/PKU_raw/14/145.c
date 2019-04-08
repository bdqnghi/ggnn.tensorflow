void main()
{
	struct student
	{
		int num,sum;
	} stu[100000];
	int n,i,j,t,chi,math;
	scanf("%d",&n);
	for (i=0;i<n;i++) 
	{
		scanf("%d %d %d",&stu[i].num,&chi,&math);
		stu[i].sum=chi+math;
	}
	for (i=0;i<3;i++)
	{
		for (j=n-1;j>i;j--)
		{
			if (stu[j].sum>stu[j-1].sum) 
			{
				t=stu[j].sum;
				stu[j].sum=stu[j-1].sum;
				stu[j-1].sum=t;
				t=stu[j].num;
				stu[j].num=stu[j-1].num;
				stu[j-1].num=t;
			}
		}
	}
	printf("%d %d\n",stu[0].num,stu[0].sum);
	printf("%d %d\n",stu[1].num,stu[1].sum);
	printf("%d %d",stu[2].num,stu[2].sum);
}
