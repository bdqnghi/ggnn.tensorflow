struct student
{
	char name[21];
	int test;
	int examine;
	char ganbu;
	char west;		
	int paper;
	int jiang;
	struct student *next;
};
void main()
{
	struct student stu[100];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].test,&stu[i].examine,&stu[i].ganbu,&stu[i].west,&stu[i].paper);
		stu[i].jiang=0;
		if(stu[i].test>80&&stu[i].paper>0)
			stu[i].jiang+=8000;
		if(stu[i].test>85&&stu[i].examine>80)
			stu[i].jiang+=4000;
		if(stu[i].test>90)
			stu[i].jiang+=2000;
		if(stu[i].test>85&&stu[i].west=='Y')
			stu[i].jiang+=1000;
		if(stu[i].examine>80&&stu[i].ganbu=='Y')
			stu[i].jiang+=850;
	}
	int m=0;
	int max,sum;
	
	max=stu[0].jiang;
	sum=stu[0].jiang;

	for(i=1;i<n;i++)
	{
		if(stu[i].jiang>max)
		{
			m=i;
	        max=stu[i].jiang;
		}
		sum=sum+stu[i].jiang;
	}
	printf("%s\n%d\n%d",stu[m].name,max,sum);
}








		