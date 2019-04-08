
struct student
{
	char num[20],name[20],dizhi[20],xb;
	int year;
	float score;
	struct student *next,*pre;  
};

struct student *create()
{
	struct student *head,*p1,*p2;
	p1=(struct student*)malloc(LEN);
	scanf(TYPE,p1->num,p1->name,&p1->xb,&p1->year,&p1->score,p1->dizhi);
	head=p1;
	p1->pre=NULL;
	p2=p1;
	while(1)
	{
		p1=(struct student*)malloc(LEN);
		scanf("%s",p1->num);
		if(strcmp(p1->num,"end")==0)
		{
			free(p1);
			break;
		}
		scanf("%s %c %d %f %s",p1->name,&p1->xb,&p1->year,&p1->score,p1->dizhi);
		p2->next=p1;
		p1->pre=p2;
		p2=p1;
	}
	p2->next=NULL;
	return p2;
}

int main()
{
	struct student *head,*p;
	head=create();
	p=head;
	while(p!=NULL)
	{
		printf("%s %s %c %d %g %s",p->num,p->name,p->xb,p->year,p->score,p->dizhi);
		printf("\n");
		p=p->pre;
	}
	return 0;
}

/*????????????????????*/