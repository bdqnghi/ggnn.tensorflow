struct stu
{
	int num;
	int yu;
	int shu;
	int tol;
	struct stu *next;
};
int n;

struct stu *creat(void)
{
	struct stu *p1,*p2,*head,*p;
	int i,k;
	p1=p2=(struct stu *)malloc(sizeof(struct stu));
	scanf("%d %d %d",&p1->num,&p1->yu,&p1->shu);
	p1->tol=p1->yu+p1->shu;
	p1->next=0;
	head=p1;
	p=p1;
	p1=(struct stu *)malloc(sizeof(struct stu));
	for(i=1;i<n;i++)
	{
		p=head;
		p2=p1;
		k=0;
		scanf("%d %d %d",&p1->num,&p1->yu,&p1->shu);
		p1->tol=p1->yu+p1->shu;
		while(p!=0&&p->tol>=p1->tol)
		{
			p2=p;
			p=p->next;
			k++;
		}
		if(k<=3)
		{
		if(p==head)
		{
			head=p1;
			p1->next=p;
		}
		if(p==0)
		{
			p2->next=p1;
			p1->next=0;
		}
		if(p!=head&&p!=0)
		{
			p2->next=p1;
			p1->next=p;
		}
		}
		p1=(struct stu *)malloc(sizeof(struct stu));
	}
	return head;
}
void main()
{
	struct stu *head,*p;
	int i=0;
	scanf("%d",&n);
	head=creat();
	p=head;
	while(i<3)
	{
		printf("%d %d\n",p->num,p->tol);
		i++;
		p=p->next;
	}
}