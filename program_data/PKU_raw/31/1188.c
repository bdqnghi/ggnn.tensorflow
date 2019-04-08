struct Student
{
	char num[20];
	char name[20];
	char sex;
	int age;
	char score[20];
	char add[20];
	struct Student *next;
};
int n;
struct Student *creat()
{
	struct Student *head,*p1,*p2;
	p1=p2=(struct Student *) malloc(LEN);				
	scanf("%s",p1->num);
	while(p1->num[0]!='e')
	{
		n++;
		scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,&p1->score,&p1->add);
		if(n==1) p1->next=NULL;
		else
		{
			p1->next=p2;
			p2=p1;
		}
		p1=(struct Student *) malloc(LEN);
		scanf("%s",p1->num);
	}
	head=p2;
	return head;
}
void print(struct Student *head)
{
	struct Student *p;
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
	struct Student *head;
	head=creat();
	print(head);
}