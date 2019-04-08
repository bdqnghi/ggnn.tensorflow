struct student
{
	long number;
	int chinese;
	int math;
	int sum;
	struct student *next;
	struct student *previous;
};
struct student *creat(long n)
{
	struct student *head,*p1,*p2;
	int i;
	head=null;
	p1=(struct student *)malloc(len);
	scanf("%d %d %d",&p1->number,&p1->chinese,&p1->math);
	p1->sum=p1->chinese+p1->math;
	p1->next=null;p1->previous=null;
	head=p1;p2=p1;
	for(i=2;i<=n;i++)
	{
		p1=(struct student *)malloc(len);
		scanf("%d %d %d",&p1->number,&p1->chinese,&p1->math);
	    p1->sum=p1->chinese+p1->math;
	    p1->next=null;
	    p1->previous=p2;
	    p2->next=p1;
	    p2=p1;
	}
	return(head);
}
struct student *print(struct student *head)
{
	struct student *max,*p;
	max=head;
    for(p=head;p!=null;p=p->next)
      if(p->sum>max->sum) max=p;
    printf("%d %d\n",max->number,max->sum);
    if(max==head)
        head=max->next;
    else 
        max->previous->next=max->next;
    return(head);
}
void main()
{
    struct student *head;
    long n;
    scanf("%d",&n);
    head=creat(n);
    print(head);
    print(head);
    print(head);
}