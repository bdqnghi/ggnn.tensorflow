struct stu
{
	char num[21];
	char name[21];
	char sex;
	int age;
	char score[11];
	char addr[21];
	struct stu *pre,*next;
}head,end;

void create()
{
	struct stu *p1,*p2;
	p2=&head;
	p1=(struct stu *)malloc(sizeof(struct stu));
	scanf("%s",p1->num);
	while (strcmp(p1->num,"end")!=0)
	{
		p2->next=p1;
		p1->pre=p2;
		scanf("%s",p1->name);
		scanf(" %c",&p1->sex);
		scanf("%d",&p1->age);
		scanf("%s",p1->score);
		scanf("%s",p1->addr);
		p2=p1;
		p1=(struct stu *)malloc(sizeof(struct stu));
		scanf("%s",p1->num);
	}
	p2->next=&end;
	end.pre=p2;
}
void anti_print()
{
	struct stu *p;
	int flag=0;
	p=end.pre;
	while (p!=&head)
	{
		if (flag) printf("\n");

		printf("%s",p->num);
		printf(" %s",p->name);
		printf(" %c",p->sex);
		printf(" %d",p->age);
		printf(" %s",p->score);
		printf(" %s",p->addr);
		p=p->pre;

		flag=1;
	}
}
void main()
{
	head.pre=NULL;
	end.next=NULL;
	create();
	anti_print();
}
