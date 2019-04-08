struct student
{
	char num[100];
	char name[30];
	char sex;
	int age;
	float grade;
	char adress[30];
	struct student *next;
	struct student *before;
};
int n;
struct student *creat(void)
{
	struct student *head,*end;
	struct student *p1,*p2;
	char str[5]={"end"};
	n=0;
	p1=p2=( struct student *)malloc(LEN);
	scanf("%s %s %c %d %g %s",&p1->num,p1->name,&p1->sex,&p1->age,&p1->grade,p1->adress);
	head=NULL;
	do
	{
		n=n+1;
		if(n==1)  {head=p1;p1->before=NULL;}
		else
		{
			p2->next=p1;
			p1->before=p2;
		}
		p2=p1;
		p1=( struct student *)malloc(LEN);
		scanf("%s",&p1->num);
		if(strcmp(p1->num,str)==0)
			break;
		scanf("%s %c %d %g %s",p1->name,&p1->sex,&p1->age,&p1->grade,p1->adress);
	}while(n<1000);
	end=p2;
	p2->next=NULL;
	return (end);
}
void print(struct student *end)
{
	struct student *p;
	p=end;
	do
	{
		printf("%s %s %c %d %g %s\n",p->num,p->name,p->sex,p->age,p->grade,p->adress);
		p=p->before;
	}while(p!=NULL);
}
void main()
{
	struct student *end;
	end=creat();
	print(end);
}
