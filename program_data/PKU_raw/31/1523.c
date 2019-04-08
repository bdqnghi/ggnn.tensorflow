struct Student
{
	char num[1000];
	char name[1000];
	char sex;
	int age;
	char score[1000];
	char add[1000];
	struct Student * next;
	struct Student * pre;
};
int n;
struct Student * creat(void)
{
	struct Student * head,* end;
	struct Student * p1,* p2;
	n=0;
	p1=p2=(struct Student *)malloc(LEN);
	scanf("%s",p1->num);
	head=NULL;
	while(p1->num[0]!='e')
	{
		scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->add);
		n++;
		if(n==1)	{	head=p1;	p1->pre=NULL;	}
		else		{	p2->next=p1;	p1->pre=p2;	}
		p2=p1;
		p1=(struct Student * )malloc(LEN);
		scanf("%s",p1->num);
	}
	p2->next=NULL;
	end=p2;
	return end;
}
void print(struct Student * end)
{
	struct Student * p;
	p=end;
	if(end!=NULL)
		do
		{
			printf("%s %s %c %d %s %s",p->num,p->name,p->sex,p->age,p->score,p->add);
			putchar('\n');
			p=p->pre;
		}
		while(p!=NULL);
}

int main()
{
	struct Student * p;
	p=creat();
	print(p);
	return 0;
}

