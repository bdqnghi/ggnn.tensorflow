struct student
{
	char num[200];
	char name[200];
	char sex;
	int age;
	float score;
	char address[200];
	struct student *next;
};
int num;
struct student *creat(void)
{
	struct student *head;
	struct student *p1,*p2;
	head=NULL;
	num=0;
	while(1)
	{
		p1=(struct student *)malloc(LEN);
		scanf("%s",p1->num);
		if (strcmp(p1->num,"end")==0)
		{
			p2->next=NULL;
			return (head);
			break;
		}
		else
		{
			scanf("%s %c %d %f %s",p1->name,&p1->sex,&p1->age,&p1->score,p1->address);
			if (num==0)
				head=p1;
			else
				p2->next=p1;
			p2=p1;
			num++;
		}
	}
}
int main()
{
	struct student *pt,*p,*pre;
	int i;
	pt=creat();
	for (i=1;i<=num;i++)
	{
		for (p=pre=pt;p;p=p->next)
		{
			if (p->next!=NULL)
				pre=p;
			else
			{
				printf("%s %s %c %d %g %s\n",p->num,p->name,p->sex,p->age,p->score,p->address);
				pre->next=NULL;
			}
		}
	}
	return 0;
}