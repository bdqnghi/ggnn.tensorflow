void main()
{
	struct stu
	{
		char num[20];
		char name[20];
		char sex;
		int age;
		float score;
		char addr[20];
		struct stu*next;
	}*p1,*p2;
	p1=malloc(sizeof(struct stu));
	scanf("%s",p1->num);
	if(*p1->num!='e')
	{
		scanf("%s %c%d%f%s",p1->name,&p1->sex,&p1->age,&p1->score,p1->addr);
		p1->next=0;
		for(;;)
		{
			p2=p1;
			p1=malloc(sizeof(struct stu));
			scanf("%s",p1->num);
			if(*p1->num=='e')break;
			scanf("%s %c%d%f%s",p1->name,&p1->sex,&p1->age,&p1->score,p1->addr);
			p1->next=p2;
		}
		p1=p2;
		for(;p1;p1=p1->next)printf("%s %s %c %d %g %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->addr);
	}
}