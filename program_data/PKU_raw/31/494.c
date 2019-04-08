
	struct stu
	{
		char num[100];
		char name[100];
		char sex[10];
		int age;
		char score[100];
		char add[100];
		struct stu *before;
	};
void main()
{
	struct stu *p2;
	struct stu * f();
	p2=f();
	while (p2!=0)
	{
		printf("%s %s %s %d %s %s\n",p2->num,p2->name,p2->sex,p2->age,p2->score,p2->add);
		p2=p2->before;
	}
}

struct stu * f()
{
	struct stu *p1,*p2;
	p1=(struct stu *)malloc(sizeof (struct stu));
	p2=p1;
	scanf("%s",p1->num);
	p1->before=0;
	if (strcmp(p1->num,"end")!=0)
	{
	do 
	{
		p2=p1;
		scanf("%s%s%d%s%s",p1->name,p1->sex,&p1->age,p1->score,p1->add);
		p1=(struct stu *)malloc(sizeof (struct stu));
		p1->before=p2;
		scanf("%s",p1->num);
	}
	while (strcmp(p1->num,"end")!=0);
	}
	return p2;
}

