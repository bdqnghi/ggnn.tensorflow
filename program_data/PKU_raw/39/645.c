struct student
{
	char name[20];
	int grade1;
	int grade2;
	char ganbu;
	char west;
	int num;
	int prize;
}stu[100];
int main()
{
	int n,i,max=0,j,total=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].grade1,&stu[i].grade2,&stu[i].ganbu,&stu[i].west,&stu[i].num);
	}
	for(i=0;i<n;i++)
	{
		stu[i].prize=0;
		if(stu[i].grade1>80&&stu[i].num>0)
			stu[i].prize=stu[i].prize+8000;
		if(stu[i].grade1>85&&stu[i].grade2>80)
		    stu[i].prize=stu[i].prize+4000;
		if(stu[i].grade1>90)
			stu[i].prize=stu[i].prize+2000;
		if(stu[i].grade1>85&&stu[i].west==89)
			stu[i].prize=stu[i].prize+1000;
		if(stu[i].grade2>80&&stu[i].ganbu==89)
			stu[i].prize=stu[i].prize+850;

	}
	for(i=0;i<n;i++)
	{
		total=total+stu[i].prize;
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].prize>max)
		{
			j=i;
			max=stu[i].prize;
		}
	}
	printf("%s\n%d\n%d",stu[j].name,stu[j].prize,total);
}
