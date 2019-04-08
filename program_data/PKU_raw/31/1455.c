
struct info
{
	char id[30];
	char name[30];
	char gen;
	int age;
	float grade;
	char add[30];
	struct info *next;
};
int n;

struct info *creat(void)
{
	struct info *head;
	struct info *p1;
	n=0;
	head=p1=(struct info*)malloc(LEN);
	scanf("%s",&p1->id);
	while(strcmp(p1->id,"end"))
	{   scanf("%s %c %d %f %s",&p1->name,&p1->gen,&p1->age,&p1->grade,&p1->add);
		n=n+1;
		if(n==1) {head=p1;p1->next=NULL;}
		else p1->next=head;
		head=p1;
		p1=(struct info*)malloc(LEN);
        scanf("%s",&p1->id);
	};
	return(head);
}

void print(struct info *head)
{
	struct info *p;
	p=head;
	if(head!=NULL)
		do
		{
			printf("%s %s %c %d %g %s\n",p->id,p->name,p->gen,p->age,p->grade,p->add);
		    p=p->next;
		}while(p!=NULL);
}

void main()
{
	struct info *head;
	head=creat();
	print(head);
}