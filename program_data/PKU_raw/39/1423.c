
struct student
{
	char name[20];
	int exam;
	int chara;
	char ganbu;
	char west;
	int paper;
};

int scholarship(struct student stu)
{
	int s=0;
	if(stu.exam>80&&stu.paper>0)
		s=s+8000;
	if(stu.exam>85&&stu.chara>80)
		s=s+4000;
	if(stu.exam>90)
		s=s+2000;
	if(stu.exam>85&&(stu.west=='Y'))
		s=s+1000;
	if((stu.ganbu=='Y')&&stu.chara>80)
		s=s+850;
	return(s);

}

void main()
{
	int n,c[100],i,sum=0,max,k;
	struct student stu[100];
	 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].exam,&stu[i].chara,&stu[i].ganbu,&stu[i].west,&stu[i].paper);
	}

	for(i=0;i<n;i++)
	{
		c[i]=scholarship(stu[i]);
		sum=sum+c[i];
	}

	max=c[0];
	k=0;
	for(i=1;i<n;i++)
	{
		if(c[i]>max)
		{
			max=c[i];
			k=i;
		}
	}

	printf("%s\n",stu[k].name);
	printf("%d\n",c[k]);
	printf("%d\n",sum);

}