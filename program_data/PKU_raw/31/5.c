struct student
{
	char number[15];
	char name[20];
	char gender[3];
	int age;
	float score;
	char address[30];
	struct student *next;
};
struct student *creat(void)
{
	int i=1;
	struct student *head,*p1=(struct student *)malloc(LEN);
	head=p1;
	head->next=NULL;
	scanf("%s%s%s%d%f%s",p1->number,p1->name,p1->gender,&p1->age,&p1->score,p1->address);
	while(1)
	{
		p1=(struct student *)malloc(LEN);
		scanf("%s",p1->number);
		if((i=strcmp(p1->number,"end"))==0)break;
		scanf("%s%s%d%f%s",p1->name,p1->gender,&p1->age,&p1->score,p1->address);
		p1->next=head;
		head=p1;
	}
	return(head);
}
void print(struct student *p)
{
	do{printf("%s %s %s %d %g %s\n",p->number,p->name,p->gender,p->age,p->score,p->address);p=p->next;}while(p->next!=NULL);
	printf("%s %s %s %d %g %s\n",p->number,p->name,p->gender,p->age,p->score,p->address);
}
void main()
{
	struct student *p=creat();
	print(p);
}