struct student
{
	char message[300];
	struct student *next;
};
int n;

struct student *creat(void)
{struct student *head;
struct student *p1,*p2;
n=0;
p1=p2=(struct student*)malloc(LEN);
gets(p1->message);
head=NULL;
while(strcmp(p1->message,"end")!=0)
{
    n=n+1;
	if(n==1)head=p1;
	else p1->next=p2;
	p2=p1;
	p1=(struct student*)malloc(LEN);
	gets(p1->message);
}
head->next=NULL;
return(p2);
}
void print(struct student *head)
{
	struct student*p;
	p=head;
	if(head!=NULL)
		do
		{
			printf("%s\n",p->message);
			p=p->next;
		}
		while(p!=NULL);
}



	 void main()
{ 
		 struct student *head;
head=creat();
print(head);
}