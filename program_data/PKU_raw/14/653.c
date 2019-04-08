struct student
{
	int id;
	int china;
	int math;
	int total;
}stu[M],temp;
int main()
{
	int n,i,j,count;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&stu[i].id,&stu[i].china,&stu[i].math);
		stu[i].total=stu[i].china+stu[i].math;
	}
	for(i=0;i<3;i++)
	{
		temp=stu[i];
		count=i;
		for(j=i+1;j<n;j++)
		{
			if(stu[j].total>temp.total)
			{
				temp=stu[j];
				count=j;
			}
		}
		stu[count]=stu[i];
		stu[i]=temp;
	}
	for(i=0;i<3;i++)
		printf("%d %d\n",stu[i].id,stu[i].total);
	return 0;
}