struct student
{
	int num;
	int chinese;
	int math;
	int sum;
};
void main()
{
	int n,i,j;
	struct student stu[100000];
	struct student stud;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&stu[i].num,&stu[i].chinese,&stu[i].math);
		stu[i].sum=stu[i].chinese+stu[i].math;
	}
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(stu[i].sum<stu[j].sum)
			{
				stud=stu[i];
				stu[i]=stu[j];
				stu[j]=stud;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		printf("%d %d\n",stu[i].num,stu[i].sum);
	}
}
