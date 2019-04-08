int main()
{
struct student
	{
		int num;
		int yuwen;
		int math;
		int zong;
	};
struct student stu[100000];
struct student *p,*p1,*p2,*p3,*p4;
int n;
scanf("%d",&n);
for(p=stu;p<stu+n;p++)
	{
		scanf("%d",&p->num);
		scanf("%d",&p->yuwen);
		scanf("%d",&p->math);
	}
for(p=stu;p<stu+n;p++)
	{
		(p->zong)=(p->yuwen)+(p->math);
	}
p1=&stu[0];
p2=&stu[1];
p3=&stu[2];
p4=p1;
if(p2->zong>p1->zong)
{
	p4=p1;
	p1=p2;
	p2=p4;
}
else 
p1=p1;
if(p3->zong>p1->zong)
{
	p4=p1;
	p1=p3;
	p3=p4;
}
else
p1=p1;
if(p3->zong>p2->zong)
{
p4=p2;
p2=p3;
p3=p4;
}
else
p1=p1;

for(p=stu+3;p<stu+n;p++)
{
if((p->zong)>(p1->zong))
{
	p3=p2;
	p2=p1;
	p1=p;
}
else if(p->zong>p2->zong)
{
	p3=p2;
	p2=p;
}
else if(p->zong>p3->zong)
{
p3=p;
}
else
p1=p1;
}
printf("%d %d\n",p1->num,p1->zong);
printf("%d %d\n",p2->num,p2->zong);
printf("%d %d",p3->num,p3->zong);
return 0;
}