struct student
{
	char num[10];
	char name[20];
	char sex;
	int age;
	char score[6];
	char addr[20];
	struct student *former;
};
int n;
struct student *create()
{
	n=0;
	struct student *p1,*p2;
	p1=p2=(struct student*)malloc(LEN);
	scanf("%s",p1->num);
	while(p2->num[0]!='e')
	{
		n++;
		if(n==1)
			p1->former=NULL;
		else p2->former=p1;
		p1=p2;
		scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->addr);
		p2=(struct student*)malloc(LEN);
		scanf("%s",p2->num);
	}
	return(p1);
}
void print(struct student*head)
{
	struct student *p;
	p=head;
	while(p!=NULL)
	{
		printf("%s %s %c %d %s %s\n",p->num,p->name,p->sex,p->age,p->score,p->addr);
		p=p->former;
	}
}
void main()
{
	struct student *head;
	head=create();
	print(head);
}