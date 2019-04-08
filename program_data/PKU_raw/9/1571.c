struct stu
{
	char name[20];
	int age;
	int order;
	struct stu *next;
};
int main()
{
	struct stu *p,*q,*t,*r,*head;
	int n,i,j;
	scanf("%d",&n);
	head=(struct stu *)malloc(l);
	q=head;
	for(i=0;i<n;i++)
	{
		p=(struct stu *)malloc(l);
		scanf("%s %d",p->name,&p->age);
		p->order=i;
		q->next=p;
		q=p;
	}
	q->next=NULL;
	for(i=0;i<n-1;i++)
		for(p=head,j=0;j<n-1-i;j++,p=p->next)
		{
			q=p->next;
			t=q->next;
			if((q->age==t->age&&q->order>t->order)||(q->age<60&&t->age<q->age&&q->order>t->order)||(t->age<60&&t->age>q->age&&q->order>t->order)||(t->age>=60&&t->age>q->age))
			{
				r=t->next;
				t->next=q;
				p->next=t;
				q->next=r;
			}
		}
	p=head->next;
	while(p!=NULL)
	{
		printf("%s\n",p->name);
		p=p->next;
	}
}

	





	