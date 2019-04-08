
struct student
{char num[20];
 char name[20];
 char sex;
 int age;
 char grade[20];
 char address[20];
 struct student *next;
};
int n;

struct student *create(void)
{
	struct student *head;
	struct student *p1,*p2;
	p1=p2=(struct student*)malloc(LEN);
	scanf("%s %s %c %d %s %s",&p1->num,&p1->name,&p1->sex,&p1->age,&p1->grade,&p1->address);
	for(n=0;p1->sex=='f' || p1->sex=='m' ;n++)
	{
		if(n==0) p1->next=NULL;
		else p1->next=p2;
		p2=p1;
		p1=(struct student *)malloc(LEN);
		scanf("%s %s %c %d %s %s",&p1->num,&p1->name,&p1->sex,&p1->age,&p1->grade,&p1->address);
	}
	head=p2;
	return(head);
}

void print(struct student *head)
{
	struct student *p;
	if (head!=NULL)
		for (p=head;p!=NULL;p=p->next)
			printf("%s %s %c %d %s %s\n",p->num,p->name,p->sex,p->age,p->grade,p->address);
}


void main()
{
	struct student *head;
	head=create();
	print(head);

}