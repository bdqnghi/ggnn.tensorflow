
struct student
{
	char name[20];
	int final;
	int cla;
	char job;
	char west;
	int essay;
	int bonus;
};

int sco1(struct student a);
int sco2(struct student a);
int sco3(struct student a);
int sco4(struct student a);
int sco5(struct student a);
void bubble(struct student *p,int n);

void main()
{
	int n,i,total=0;
	struct student stu[101]={0,0,0,0,0,0,0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].final,&stu[i].cla,&stu[i].job,&stu[i].west,&stu[i].essay);
		stu[i].bonus=sco1(stu[i])+sco2(stu[i])+sco3(stu[i])+sco4(stu[i])+sco5(stu[i]);
		total=total+stu[i].bonus;
	}
	bubble(stu,n);
	printf("%s\n%d\n%d",stu[0].name,stu[0].bonus,total);
}

int sco1(struct student a)
{
	if(a.final>80&&a.essay>0)
		return 8000;
	else
		return 0;
}
int sco2(struct student a)
{
	if(a.final>85&&a.cla>80)
		return 4000;
	else
		return 0;
}
int sco3(struct student a)
{
	if(a.final>90)
		return 2000;
	else
		return 0;
}
int sco4(struct student a)
{
	if(a.final>85&&a.west=='Y')
		return 1000;
	else
		return 0;
}
int sco5(struct student a)
{
	if(a.cla>80&&a.job=='Y')
		return 850;
	else
		return 0;
}
void bubble(struct student * p,int n)
{
	int i,j;
	struct student t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(p[j].bonus<p[j+1].bonus)
			{t=p[j];p[j]=p[j+1];p[j+1]=t;}
		}
	}
}