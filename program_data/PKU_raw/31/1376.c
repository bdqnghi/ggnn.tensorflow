
struct student
{
	char num[100];
	char nam[100];
	char sex[2];
	char age[100];
	char sco[100];
	char add[100];
	struct student *prev;
	struct student *next;
};

struct student *create(void)
{
	struct student *head,*end,*p1,*p2;
	int n=0;
	p1=p2=(struct student*)malloc(LEN);
	scanf("%s",p1->num);
	while(strcmp(p1->num,"end")!=0)
	{
		n++;
		scanf("%s%s%s%s%s",p1->nam,p1->sex,p1->age,p1->sco,p1->add);
		if(n==1)
		{
			head=p1;
			p1->prev=NULL;
		}
		else
		{
			p2->next=p1;           
			p1->prev=p2;
		}
		p2=p1;
		p1=(struct student*)malloc(LEN);
		scanf("%s",p1->num);
	}
	p2->next=NULL;                  
	end=p2;
	return(end);
}

void print(struct student *end)
{
	struct student *p;
	p=end;
	do
	{
		printf("%s %s %s %s %s %s\n",p->num,p->nam,p->sex,p->age,p->sco,p->add);
		p=p->prev;
	}while(p!=NULL);
}

void main()
{
	struct student *end;
	end=create();
	print(end);
}
