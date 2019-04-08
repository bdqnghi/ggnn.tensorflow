struct student
{char name[20];
 int endmark;
 int mark;
 char ganbu;
 char xibu;
 int essay;
}stu[100];
void main()
{
	int n,i,max,p,sum=0;
	int scholar[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].endmark,&stu[i].mark,&stu[i].ganbu,&stu[i].xibu,&stu[i].essay);
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].endmark>80&&stu[i].essay>=1)  scholar[i]=scholar[i]+8000;
		if(stu[i].endmark>85&&stu[i].mark>80)  scholar[i]=scholar[i]+4000;
		if(stu[i].endmark>90)  scholar[i]=scholar[i]+2000;
		if(stu[i].endmark>85&&stu[i].xibu=='Y')  scholar[i]=scholar[i]+1000;
		if(stu[i].mark>80&&stu[i].ganbu=='Y')  scholar[i]=scholar[i]+850;
	}
	max=scholar[0];
	for(i=0;i<n;i++)
	{
		if(scholar[i]>max)  max=scholar[i];
	}
	for(i=n-1;i>=0;i--)
	{
		if(scholar[i]==max)  p=i;
	}
	for(i=0;i<n;i++)
	{
		sum=sum+scholar[i];
	}
	printf("%s\n%d\n%d\n",stu[p].name,max,sum);
}
