
struct student
{
	char id[50];
	char *name;
	char sex;
	short int age;
	float score;
	char *add;
	struct student *next;
};
int n;
struct student *creat(void)
{
	struct student *p1,*head,*p2;
	n=0;
	head=NULL;
	p2=p1=(struct student*)malloc(sizeof(struct student));
    gets(p1->id);
	while(strcmp(p1->id,"end")!=0)
	{
		n++;
		if(n==1) 
		p1->next=NULL;
		else 
		{   p1->next=p2;
		}
		p2=p1;
		head=p2;
		p1=(struct student*)malloc(sizeof(struct student));
		gets(p1->id);
	}
	return head;
}
void print(struct student *head)
{
	struct student *p;
	p=head;
    while(p!=NULL)
	{
		printf("%s\n",p->id);
		p=p->next;
	}
}
main()
{
	struct student *head;
	head=creat();
	print(head);
}
		
