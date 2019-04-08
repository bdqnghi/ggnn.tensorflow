struct student
{
		char num[20];
		char name[20];
		char sex;
		int age;
		char score[10];
		char add[20];
		struct student *next;
};
int n=0;
struct student *creat(void)
{
	struct student *head,*p1,*p2;
	p1=p2=(struct student *)malloc(LEN);
	head=NULL;
	scanf("%s",p1->num);
	if(p1->num[0]=='e')
		return(head);
	scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->add);
	p1->next=NULL;
	while(p1->num[0]!='e')
	{
		n=n+1;
		head=p1;
		if(n>1)
		{
			p1->next=p2;
			p2=p1;
		}
		p1=(struct student *)malloc(LEN);
		scanf("%s",p1->num);
		if(p1->num[0]=='e')
			break;
		scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->add);
	}
	return(head);
}
void print(struct student *head)
{
	struct student *p;
	p=head;
	if(head!=NULL)
		do
		{
			printf("%s %s %c %d %s %s\n",p->num,p->name,p->sex,p->age,p->score,p->add);
			p=p->next;
		}while(p!=NULL);
}
void main()
{
	struct student *head;
	head=creat();
	print(head);
}
