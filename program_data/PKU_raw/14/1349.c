struct student
{
	int num;
	int score1;
	int score2;
	int sum;
	struct student *next;
};
struct student *creat(int m)
{
	int i=0;
    struct student *head,*p1,*p2;
	p1=p2=(struct student *)malloc(LEN);
    scanf("%d %d %d",&p1->num,&p1->score1,&p1->score2);
	p1->sum=(p1->score1)+(p1->score2);
    head=NULL;
	while(p1->num<m)
	{
		i++;
		if(i==1) head=p1;
	    else p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(LEN);
        scanf("%d %d %d",&p1->num,&p1->score1,&p1->score2);
	    p1->sum=(p1->score1)+(p1->score2);
	}
	p2->next=NULL;
	return(head);
}
void print(struct student *head)
{
    struct student *p=head,*q=head;
	int a=0,b=0,c=0;
	if(head!=NULL)
		
	{do
		{
			if(a<p->sum)
			{a=p->sum;q=p;}
			p=p->next;
		}while(p!=NULL);
		printf("%d %d\n",q->num,q->sum);
        q->sum=0;
        p=head;q=head;
	 do
	  {if(b<p->sum)
			{b=p->sum;q=p;}
			p=p->next;
	  }while(p!=NULL);
		printf("%d %d\n",q->num,q->sum);
        q->sum=0;
        p=head;q=head;
		do
		{if(c<p->sum)
			{c=p->sum;q=p;}
			p=p->next;
	  }while(p!=NULL);
	printf("%d %d",q->num,q->sum);
	}
}
void main()
{
	int m;
	scanf("%d",&m);
	struct student *head,stu;
	head=creat(m);
	print(head);
}
