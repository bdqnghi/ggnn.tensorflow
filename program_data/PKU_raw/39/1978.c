struct student
{
	char name[20];
	int score;
	int value;
	char cadre;
	char west;
	int paper;
	int sum;
};
int deal(struct student stu)
{
	stu.sum=0;
	if(stu.score>80&&stu.paper>0)
		stu.sum+=8000;
	if(stu.score>85&&stu.value>80)
		stu.sum+=4000;
	if(stu.score>90)
		stu.sum+=2000;
	if(stu.score>85&&stu.west=='Y')
		stu.sum+=1000;
	if(stu.value>80&&stu.cadre=='Y')
		stu.sum+=850;
	return(stu.sum);
}
void main()
{
	int n,i,total=0,top=0,t=0;
	scanf("%d",&n);
	struct student stu[100];
	for(i=0;i<n;i++)
	{scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].score,&stu[i].value,&stu[i].cadre,&stu[i].west,&stu[i].paper);
	stu[i].sum=deal(stu[i]);total+=stu[i].sum;
	if(stu[i].sum>top)
	{top=stu[i].sum;t=i;}
	}
	printf("%s\n%d\n%d",stu[t].name,top,total);
}
