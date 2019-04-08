struct student
{
	char num[20];
	char name[21];
	char sex;
	int age;
    char score[20];
	char address[21];
	struct student *next;
};
int n;

struct student *create(void)
{
	struct student *head;
	struct student *p1,*p2;
	n=0;
	p1=p2=(struct student *)malloc(length);
	scanf("%s",p1->num);
	head=null;
	while(strcmp(p1->num,"end")!=0)
	{
		scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->address);
		n=n+1;
		if(n==1) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(length);
		scanf("%s",p1->num);
	}
	p2->next=null;
	return head;
}
void print(struct student *head)
{
	struct student *p,*q;
	p=head;
	if(head!=null)
	{
		do
		{
			printf("%s %s %c %d %s %s\n",p->num,p->name,p->sex,p->age,p->score,p->address);
			q=p;
			p=p->next;
			free(q);
		}
		while(p!=null);

	}
}

struct student *converse(struct student *head)
{
	struct student *p1,*p2,*p3;
	p1=p2=head;

	if(head!=null)
	{
		while(p2->next!=null)
		{
			p3=p2->next;
			if(p2==head) p2->next=null;
			else p2->next=p1;
			p1=p2;
			p2=p3;
		}
		p2->next=p1;
		head=p2;
	}
	return head;
}

void main()
{
	
	struct student *p=create();
	p=converse(p);
	print(p);
}


	


	


