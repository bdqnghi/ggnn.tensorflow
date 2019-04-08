struct student
{
	char num[20];
	char name[20];
	char sex;
	int age;
	float score;
	char add[20];
	struct student * next;
};
struct student * input(void)
{
	struct student *p1,*p2,*head;
	p1=(struct student *)malloc(len);
	p1->next=NULL;
	scanf("%s %s %c %d %f %s",p1->num,p1->name,&p1->sex,&p1->age,&p1->score,p1->add);
	do
	{
		p2=(struct student *)malloc(len);
		scanf("%s %s %c %d %f %s",p2->num,p2->name,&p2->sex,&p2->age,&p2->score,p2->add);
		p2->next=p1;
		p1=p2;
	}while(strcmp(p2->num,"end")!=0);
	head=p2->next;
	return(head);
}
void print(struct student*head)
{
	struct student *p;
	p=head;
	do
	{
		printf("%s %s %c %d %g %s\n",p->num,p->name,p->sex,p->age,p->score,p->add);
			p=p->next;
	} while(p!=NULL);
}
void main()
{
	struct student * head;
	head=input();
	print(head);
}

