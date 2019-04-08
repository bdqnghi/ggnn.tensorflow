struct student
{
	char num[1000];
	struct student *next;
};
int n=0;
struct student *creat()
{
	struct student *head,*p1,*p2;
	p1=p2=(struct student*)malloc(LEN);
	gets(p1->num);
	while (strcmp(p1->num,"end")!=0)                                 
	{
		n=n+1;
		if (n==1) head=p1;                         
		else p2->next=p1;
		p2=p1;
		p1=(struct student*)malloc(LEN);
        gets(p1->num);
	}
	p2->next=NULL;
	return (head);
}
struct student *reverse(struct student *head)
{
	struct student *s,*s1;
	s=head;
	head=NULL;
	while(s)
	{
		s1=s;
		s=s->next;
		s1->next=head;
		head=s1;
	}
	return (head);
}
void print (struct student *head)
{
	struct student *p;
	p=head;
	while (p!=NULL)
		{
			printf("%s\n",p->num);
			p=p->next;
		}
}
void main ()
{
	struct student *head;
	head=creat();
	head=reverse(head);
	print(head);
}
