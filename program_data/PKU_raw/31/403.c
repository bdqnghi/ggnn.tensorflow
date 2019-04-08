struct student{
	char num[20],name[20],add[100],sex[2];
	int age;
	float score;
	struct student *next;
};
void main()
{
	struct student *p1,*p,*p2;
	p=(struct student*)malloc(sizeof(struct student));
	p->next=NULL;
	scanf("%s",p->num);
	while(p->num[0]!='e')
	{
		scanf("%s%s%d%f%s",p->name,p->sex,&p->age,&p->score,p->add);
		p1=p;
		p=(struct student*)malloc(sizeof(struct student));
		p->next=p1;
	    scanf("%s",p->num);
	}
	p2=p1;
	while(p2!=NULL)
	{
		printf("%s %s %s %d %g %s\n",p2->num,p2->name,p2->sex,p2->age,p2->score,p2->add);
		p2=p2->next;
	}
	
}
