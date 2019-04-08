
struct student
{
	char str[100];
	struct student *next;
};

struct student *creat(void)
{struct student *head;
 struct student *p1,*p2,*p3;
 p1=p2=p3=(struct student *)malloc(LEN);
 gets(p1->str);
 while(strcmp(p1->str,"end")!=0)
 {
   p1=(struct student *)malloc(LEN);
   gets(p1->str);
   head=p1;
   p1->next=p2;
   p2=p1;
 }
 p3->next=0;
 return(head);
}

void print(struct student *head)
{
	struct student *p;
	p=head->next;
	do
	{
		puts(p->str);
		p=p->next;
	}while (p->next!=0);
		puts(p->str);
} 

main()
{
	struct student *head;
	head=creat();
	print(head);
}