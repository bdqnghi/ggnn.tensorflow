struct student{				
	int no;
	int ch;
	int math;
	int sum;
	struct student *next;
};


struct student *creat(long n)
{
	long i;
	struct student *head, *p,*q;
	head=(struct student *)malloc(len);
	p=(struct student *)malloc(len);
	head->next=q=p;
	scanf("%d %d %d",&p->no, &p->ch,&p->math);
	p->sum=(p->ch)+(p->math);				

	for(i=1;i<n;i++)
	{
		p=(struct student *)malloc(len);
		scanf("%d %d %d",&p->no, &p->ch,&p->math);
		p->sum=(p->ch)+(p->math);	
		q->next=p;
		q=p;
		p->next=NULL;
	}
//	for(p=head->next;p!=NULL;p=p->next)printf("%d %d",p->no,p->sum);
	return(head);
}

void sort(struct student *head)   
{
	struct student *p,*q1,*q2,*q3;
	int m1,m2,m3;
	for(p=head->next,m1=p->sum;p!=NULL;p=p->next)
		if(p->sum>m1){m1=p->sum;q1=p;}
	printf("%d %d\n",q1->no,q1->sum);
	for(p=head->next,m2=p->sum;p!=NULL;p=p->next)
		if(p->sum>m2 && p!=q1){m2=p->sum;q2=p;}
	printf("%d %d\n",q2->no,q2->sum);
	for(p=head->next,m3=p->sum;p!=NULL;p=p->next)
		if(p->sum>m3 && p!=q1 && p!= q2){m3=p->sum;q3=p;}
	printf("%d %d\n",q3->no,q3->sum);
}

int main()
{
	long n;
	struct student *head;
	scanf("%d",&n);
	head=creat(n);
	sort(head);
	return 0;
}
