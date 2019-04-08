
struct student
{
	char name[20];
	int mark1;
	int mark2;
	char judge1;
	char judge2;
	int paper;
	double total;
}stu;
double max=0;

void main()
{
	void compare(struct student temp);
	struct student stu1;
	int n,i;
	stu1.total=0;
	stu.total=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d %c %c%d",stu1.name,&stu1.mark1,&stu1.mark2,&stu1.judge1,&stu1.judge2,&stu1.paper);
		compare(stu1);
		//printf("%s\n%d\n%d\n%c\n%c\n%d\n",stu1.name,stu1.mark1,stu1.mark2,stu1.judge1,stu1.judge2,stu1.paper);
	}
	printf("%s\n%.0lf\n%.0lf\n",stu.name,stu.total,max);
}
void compare(struct student temp)
{
	if(temp.mark1>80&&temp.paper>0)temp.total+=8000;	//????????8000?
	if(temp.mark1>85&&temp.mark2>80)temp.total+=4000;	//????????4000?
	if(temp.mark1>90)temp.total+=2000;					//????????2000?
	if(temp.mark1>85&&temp.judge2=='Y')temp.total+=1000;//????????1000?
	if(temp.mark2>80&&temp.judge1=='Y')temp.total+=850;	//????????850?
	max+=temp.total;
	if(temp.total>stu.total)stu=temp;
}