struct student
{
	char num[20];
	char name[20];
	char sex;
	int age;
	float score;
	char address[20];
	struct student *next;
};
int n;
struct student *creat(void)
{
	struct student *head;
	struct student *p1,*p2;
	int num=0;
	head=NULL;
	while (1)
	{
		p1=(struct student *)malloc(LEN);
		scanf("%s",p1->num);
		if (strcmp(p1->num,"end")==0)
		{
			p2->next=NULL;
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
	n=num;
	return (head);
}
void print (struct student *pt)
{
	struct student *p,*pre;
	int i;
	for (i=1;i<=n;i++)
	{
		for (p=pre=pt;p->next!=NULL;p=p->next)
			pre=p;
		printf("%s %s %c %d %g %s\n",p->num,p->name,p->sex,p->age,p->score,p->address);
		if (p!=pt)
		{
			pre->next=NULL;
			free(p);
		}
	}
}
int main()
{
	struct student *pt;
	pt=creat();
	print(pt);
	return 0;
}