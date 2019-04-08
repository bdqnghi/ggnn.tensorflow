
struct data
{
char id[11];
int age;
struct data *next;
}*p1,*p2,*head,*q1,*q2,*qhead;

void main ()
{
	int i,n,k=0;
	struct data * sort( struct data *head,int n);
	void print(struct data *head);
	scanf ("%d",&n);
	head=p1=p2=(struct data *)malloc(LEN);
	head->next=NULL;
	for (i=0;i<n;i++)
	{
		p1=(struct data *)malloc(LEN);
		scanf ("%s %d",p1->id,&p1->age);
		if ((p1->age)>=60)
			k++;
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	qhead=q1=q2=(struct data *)malloc(LEN);
	qhead->next=NULL;
	for (i=n;i>n-k;i--)
	{
		head=sort(head,i);
	}
	q2->next=NULL;
	q2->next=head->next;
	free(head);
	print(qhead);
}

struct data * sort(struct data *head,int n)
{
	int max=59,i;
	struct data *p1,*p2,*code,*pre;
	p2=head;
	p1=head->next;
	for (i=0;i<n;i++)
	{
		if ((p1->age)>max)
		{
			max=p1->age;
			code=p1;
			pre=p2;
		}
		p1=p1->next;
		p2=p2->next;
	}
	q1=(struct data *)malloc(LEN);
	strcpy(q1->id,code->id);
	q1->age=code->age;
	q2->next=q1;
	q2=q1;

	if (pre==head)
		head->next=code->next;
	else
		pre->next=code->next;
	free(code);
	return (head);
}

void print(struct data *qhead)
{
	struct data *q;
	q=qhead->next;
	do
	{
		printf ("%s\n",q->id);
		q=q->next;
	}
	while (q!=NULL);
}
