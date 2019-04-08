struct student
{char num[20];
 char name[20];
 char sex;
 int age;
 char score[20];
 char addr[30];
 struct student *next;
};
int n;

struct student *creat(void)
{
	struct student *end,*p1,*p2;
	n=0;
	p1=p2=(struct student *)malloc(LEN);
	scanf("%s %s %c %d %s %s",&p1->num,p1->name,&p1->sex,&p1->age,&p1->score,p1->addr);
    end=NULL;
	while(strlen(p1->name)!=0)
	{
		n=n+1;
		if(n==1)
		{p1->next=NULL;}
		else
		{p1->next=p2;}
		p2=p1;
		p1=(struct student *)malloc(LEN);
		scanf("%s %s %c %d %s %s",&p1->num,p1->name,&p1->sex,&p1->age,&p1->score,p1->addr);
	}
	end=p2;
	return end;
}

void main()
{
	struct student *p,*end;
	end=creat();
	p=end;
	if(end!=NULL)
	{
		do
		{
			printf("%s %s %c %d %s %s\n",p->num,p->name,p->sex,p->age,p->score,p->addr);
			p=p->next;
		}
		while(p!=NULL);
	}
}
