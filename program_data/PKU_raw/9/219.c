
struct data
{
char id[11];
int age;
struct data *next;
};

void main ()
{
	int i,n,k=0;
	struct data *p1,*p2,*head;
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

	for (i=n;i>n-k;i--)
	{
		head=sort(head,i);
	}
	print(head);
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
	printf("%s\n",code->id);

	if (pre==head)
		head->next=code->next;
	else
		pre->next=code->next;
	free(code);
	return (head);
}

void print(struct data *head)
{
	struct data *p;
	p=head->next;
	do
	{
		printf ("%s\n",p->id);
		p=p->next;
	}
	while (p!=NULL);
}