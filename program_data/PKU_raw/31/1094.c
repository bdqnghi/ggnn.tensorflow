struct stu{
	char num[20];
	char name[20];
	char gen;
	int age;
	float mark;
	char add[20];
	struct stu *next;
};
char end[4]="end";
int main()
{
	struct stu *p1,*p2,t;
	p1=p2=NULL;
	while(scanf("%s",t.num),strcmp(t.num,end)!=0)
	{
		scanf("%s %c %d %g %s\n",t.name,&t.gen,&t.age,&t.mark,t.add);
		p1=(struct stu *)malloc(LEN);
		*p1=t;
		p1->next=p2;
		p2=p1;
		}
	while(p1!=NULL)
	{
		printf("%s %s %c %d %g %s\n",p1->num,p1->name,p1->gen,p1->age,p1->mark,p1->add);
		p1=p1->next;
		}
}