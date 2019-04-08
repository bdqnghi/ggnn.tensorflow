struct student
{
	char id[100],name[100],sex[2];
	char sco[100];
	int age;
	char pos[100];
	struct student *pre;
};
int n;
struct student*creat(void)
{
	struct student *head;
	struct student *p1,*p2;
	n=0;
	p1=p2=(struct student*)malloc(LEN);
	scanf("%s",&p1->id);
	if(strcmp(p1->id,"end")!=0)
	{
		scanf("%s%s%d%s%s",&p1->name,&p1->sex,&p1->age,&p1->sco,&p1->pos);
	}
	head=NULL;
	while(strcmp(p2->id,"end")!=0)
	{
		n=n+1;
		if(n==1)
		{	
			head=p1;
			p1->pre=NULL;
		}
		else
			p2->pre=p1;
		p1=p2;
		p2=(struct student*)malloc(LEN);
		scanf("%s",&p2->id);
		if(strcmp(p2->id,"end")!=0)
		{
			scanf("%s%s%d%s%s",&p2->name,&p2->sex,&p2->age,&p2->sco,&p2->pos);
		}
	}
	return p1;
}
void print(struct student*head)
{
		struct student*p;
		p=head;
		if(head!=NULL&&strcmp(head->id,"end")!=0)
		{
			do
			{
				printf("%s %s %s %d %s %s\n",p->id,p->name,p->sex,p->age,p->sco,p->pos);
				p=p->pre;
			}while(p!=NULL);
		}
}
main()
{
	struct student*last;
	last=creat();
	print(last);
	return 0;
}