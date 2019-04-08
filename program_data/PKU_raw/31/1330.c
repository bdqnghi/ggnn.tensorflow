struct student
{
	char s[100];
	struct student *next;
};
int n;
struct student *creat( )
{
	struct student *head;
	struct student *p1,*p2;
	n=0;
	p1=p2=(struct student*)malloc(len);
	gets(p1->s);
	head=0;
	while(strcmp(p1->s,"end")!=0)
	{
		n++;
		if(n==1)head=p1;
		else p1->next=p2;
		p2=p1;
		p1=(struct student*)malloc(len);
		gets(p1->s);
	}
	head->next=0;
	return(p2);
}
void print(struct student *head)
{
	struct student *p;
	p=head;
	if(head!=0)
		do
		{
			printf("%s\n",p->s);
			p=p->next;
		}while(p!=0);
}
int main()
{
	struct student *p;
	p=creat();
	print(p);
}

