struct student
{
	char num[10];
	char name[20];
	char sex[5];
	char age[5];
	char score[10];
	char adr[20];
	struct student *next;
};
struct student *creat(void)
{
	struct student *head;
    struct student *p1;
	head=p1=( struct student * ) malloc(LEN);
	scanf("%s%s%s%s%s%s",p1->num,p1->name,p1->sex,p1->age,&p1->score,p1->adr);
	p1->next=NULL;
    while(p1->num[0]!='e')
	{
		p1=( struct student * ) malloc(LEN);
		scanf("%s",p1->num);
	    if(p1->num[0]!='e')
		{
			scanf("%s%s%s%s%s",p1->name,&p1->sex,&p1->age,&p1->score,p1->adr);
		    p1->next=head;
		    head=p1;
		}
	}
	return(head);
}
void print(struct student *head)
{
	struct student *p;
	p=head;
	while(p!=NULL)
	{
		printf("%s %s %s %s %s %s\n",p->num,p->name,p->sex,p->age,p->score,p->adr);
		p=p->next;
	}
}
void main()
{
	struct student *h;
	h=creat();
	print(h);
}












