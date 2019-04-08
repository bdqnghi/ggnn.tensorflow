struct student
{
	int num;
	int yuwen;
	int math;
	int total;
};
int main()
{
	int n,i,j;
	struct student stu[4],temp;
	scanf("%d",&n);
	for(i=0;i<3;i++)
	stu[i].total=0;
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&stu[3].num,&stu[3].yuwen,&stu[3].math);
		stu[3].total=stu[3].yuwen+stu[3].math;
		temp=stu[3];
		for(j=2;j>=0;j--)
		if(temp.total>stu[j].total)
		{
			stu[j+1]=stu[j];
			stu[j]=temp;
		}
		else
		{
			stu[j+1]=temp;
			break;
		}
	}
	for(i=0;i<3;i++)
	printf("%d %d\n",stu[i].num,stu[i].total);
	return 0;
}