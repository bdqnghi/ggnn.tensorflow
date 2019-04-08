struct student
{
	char name[20];
    int score;
	int pingyi;
	char ganbu;
	char west;
	int paper;
};
int main()
{
	int n,i,t,x,y=0,a[100]={0};
	struct student stu[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].score,&stu[i].pingyi,&stu[i].ganbu,&stu[i].west,&stu[i].paper);
	}
	for(i=0;i<n;i++)
	{if(stu[i].score>80&&stu[i].paper>0) {a[i]=a[i]+8000;}
	if(stu[i].score>85&&stu[i].pingyi>80) {a[i]=a[i]+4000;}
	if(stu[i].score>90){a[i]=a[i]+2000;}
	if(stu[i].score>85&&stu[i].west=='Y'){a[i]=a[i]+1000;}
	if(stu[i].pingyi>80&&stu[i].ganbu=='Y'){a[i]=a[i]+850;}
	}
    t=a[0];x=0;
	for(i=0;i<n;i++)
	{if(a[i]>t) {t=a[i];x=i;}
	y=y+a[i];}
	printf("%s\n%d\n%d\n",stu[x].name,a[x],y);
}