struct student
{
	char name[20];
	int qimo;
	int banpin;
	char ganbu;
	char xibu;
	int lunwen;
	double sum;
}stu[100];
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].qimo,&stu[i].banpin,&stu[i].ganbu,&stu[i].xibu,&stu[i].lunwen);
		stu[i].sum=0;
        if(stu[i].qimo>80&&stu[i].lunwen>0)stu[i].sum=stu[i].sum+8000;
		if(stu[i].qimo>85&&stu[i].banpin>80)stu[i].sum=stu[i].sum+4000;
		if(stu[i].qimo>90)stu[i].sum=stu[i].sum+2000;
		if(stu[i].xibu=='Y'&&stu[i].qimo>85)stu[i].sum=stu[i].sum+1000;
        if(stu[i].ganbu=='Y'&&stu[i].banpin>80)stu[i].sum=stu[i].sum+850;
	}
	int max=0,totalsum=0;
	for(i=0;i<n;i++)
	{if(stu[i].sum>max)max=stu[i].sum;}
	for(i=0;i<n;i++)
	{if(stu[i].sum==max){printf("%s\n",stu[i].name);break;}}
	for(i=0;i<n;i++)
	{
	totalsum=totalsum+stu[i].sum;
	}
	printf("%d\n%d",max,totalsum);
}
