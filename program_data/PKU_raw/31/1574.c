struct stu
{char num[50];
char name[50];
char gentle;
int age;
int score;
char add[50];
struct stu *next;
};
int n;
struct stu *creat(void)
{
	struct stu *head,*p1,*p2;
	n=0;
	p1=p2=(struct stu *)malloc(sizeof(struct stu));
         gets(p1->num);
	head=NULL;
	while(strcmp(p1->num,"end")!=0)
	{
	n++;
	if(n==1) p1->next=NULL;
	else {p1->next=p2;}
	p2=p1;
	head=p2;
	p1=(struct stu *)malloc(sizeof(struct stu));
	gets(p1->num);
	}
	return head;
}
void print(struct stu *head)
{
	struct stu *p;
	p=head;
	while(p!=NULL)
	{
		printf("%s\n",p->num);
		p=p->next;
	}
}
void main()
{
	struct stu *head;
	head=creat();
	print(head);
}
