struct student
{
	int num;
	int ch;
	int ma;
	int sum;
	struct student *next;
};
int N;
int n;

struct student *creat(void)
{
	struct student *head;
	struct student *p1,*p2;
	n=0;
	p1=p2=(struct student *)malloc(LEN);
	scanf("%d %d %d",&p1->num,&p1->ch,&p1->ma);
	p1->sum=p1->ch+p1->ma;
	head=null;
	while(n<N-1)
	{
		n=n+1;
		if(n==1)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(LEN);
		scanf("%d %d %d",&p1->num,&p1->ch,&p1->ma);
		p1->sum=p1->ch+p1->ma;
	}
	p2->next=null;
	return(head);
}

void main()
{
	scanf("%d",&N);
	struct student *head,*p1,*p2;
	head=creat();
	p1=head->next;
	p2=p1->next;
	void sort(struct student *p3,struct student *p4);
	sort(head,p1);
	sort(p1,p2);
	sort(p2,p2->next);
	p2->next=null;
	p1=head;
	while(p1!=null)
	{
	    printf("%d %d\n",p1->num,p1->sum);
		p1=p1->next;
	}
}

void sort(struct student *p3,struct student *p4)
{
	int k;
	while(p4!=null)
	{
		if(p3->sum<p4->sum)
		{
			k=p3->num;
			p3->num=p4->num;
			p4->num=k;
			k=p3->sum;
			p3->sum=p4->sum;
			p4->sum=k;
		}
		p4=p4->next;
	}
}