struct student
{
	char num[200];
	char name[100];
	char xingbie;
	int age;
	char score[200];
	char add[200];
	struct student *next;
};
struct student*creat()
{
	struct student *p1,*head;
	p1=(struct student*)malloc(LEN);
	head=NULL;
	scanf("%s",p1->num);
		if(strcmp(p1->num,"end")==0) return head;
	scanf("%s %c %d %s %s",p1->name,&p1->xingbie,&p1->age,p1->score,p1->add);
	while(1)
	{
		p1->next=head;
		head=p1;
		p1=(struct student*)malloc(LEN);
		scanf("%s",p1->num);
		if(strcmp(p1->num,"end")==0)
			break;
		else
			scanf("%s %c %d %s %s",p1->name,&p1->xingbie,&p1->age,p1->score,p1->add);	
	}
	return (head);
}
void main()
{
	struct student *p;
	p=creat();
	while(p!=NULL) 
	{
		if((strcmp(p->num,"end")==0)){p=p->next;continue;}
		printf("%s %s %c %d %s %s\n",p->num,p->name,p->xingbie,p->age,p->score,p->add);
		p=p->next;
	}; 
}