struct student
{
	char num[10];
	char name[20];
	char sex;
	int age;
	float score;
	char adr[15];
	struct student *last;
};

char str[]="end";
int n=0;

void print(struct student *head)
{
	struct student *p;
	p=head;
	if(head!=NULL)
		do
		{
			printf("%s %s %c %d %g %s\n",p->num,p->name,p->sex,p->age,p->score,p->adr);
		    p=p->last;
		}while(p!=NULL);
}

void main()
{
	struct student *creat(void);
	void print(struct student *head);
	struct student *head;
	head=creat();
	print(head);
}

struct student *creat()
{
	struct student *head;
	struct student *p1,*p2;
	p1=p2=(struct student*)malloc(LEN);
	scanf("%s",&p1->num);
	head=NULL;
	while(strcmp(p1->num,str)!=0)
	{
		scanf("%s %c %d %f %s",&p1->name,&p1->sex,&p1->age,&p1->score,&p1->adr);
		if(n==0){p1->last=NULL;n=1;}
		else {p1->last=p2;}
		p2=p1;
		p1=(struct  student*)malloc(LEN);
		scanf("%s",&p1->num);
	}
	head=p2;
	return(head);
}

 
