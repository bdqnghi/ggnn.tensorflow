struct stu
{
	char num[15];
	int chi;
	int math;
	int sum;
	struct stu *next;
};
int n;
struct stu *creat(void)
{
	struct stu *head,*p,*g,*h;
	int i,j;
	p=(struct stu*)malloc(LEN);
	scanf ("%s %d %d",p->num,&p->chi,&p->math);
	p->sum=p->chi+p->math;
	for (i=0;;i++)
	{
		if (i==0) {head=p;head->next=NULL;}
		else if (i<3) 
		 { 
			 for (h=head,j=0;j<i;j++)
			 {
				 if (p->sum>h->sum) break;
				 else {g=h; h=h->next;}
			 }
			 if (j==0) {p->next=head;head=p;}
			 else if (j==i) {g->next=p;p->next=NULL;}
			 else {g->next=p;p->next=h;}
		 }
		 else
		{ 
			 for (h=head,j=0;j<3;j++)
			 {
				 if (p->sum>h->sum) break;
				 else {g=h; h=h->next;}
			 }
			 if (j==0) {p->next=head;head=p;}
			 else {g->next=p;p->next=h;}
		 }
		 if (i==n-1) break;
		 p=(struct stu*)malloc(LEN);
		 scanf ("%s %d %d",p->num,&p->chi,&p->math);
		 p->sum=p->chi+p->math;
	}
	return(head);
}
void print(struct stu *head)
{
	struct stu *p;
	int i;
	for (p=head,i=0;i<3;i++,p=p->next)
			printf("%s %d\n",p->num,p->sum);
}
void main()
{
	struct stu *head;
	scanf("%d",&n);
	head=creat();
	print(head);
}
