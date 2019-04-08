struct student
{
	int num;
	int score1;//????
	int score2;//????
	int total;
};
struct student stu[100000];
int main()
{
   	long i,m;
	scanf("%ld",&m);
	struct student *p=stu;
	for(i=0;i<m;i++,p++)
	{
		scanf("%d%d%d",&(p->num),&(p->score1),&(p->score2));
		p->total=(p->score1+p->score2);
	}
	int max1,max2,max3,a1=0,a2=0,a3=0;
	max1=stu[0].total;
	for(i=0;i<m;i++)
	{
		if(stu[i].total>max1)	{max1=stu[i].total;a1=i;}
	}
	max2=stu[0].total;
	for(i=0;i<m;i++)
	{
		
		if(stu[i].total>max2&&i!=a1)	{max2=stu[i].total;a2=i;}
	}
	max3=stu[0].total;
	for(i=0;i<m;i++)
	{
		
		if(stu[i].total>max3&&stu[i].total<max2)	{max3=stu[i].total;a3=i;}
	}
	printf("%d %d\n",stu[a1].num,stu[a1].total);
	printf("%d %d\n",stu[a2].num,stu[a2].total);
	printf("%d %d",stu[a3].num,stu[a3].total);
	return 0;
}