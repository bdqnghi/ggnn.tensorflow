struct student
{
	char num[20];
	char name[20];
	char sex;
	int age;
	char grade[20];
	char address[20];
	struct student *next;
};
struct student stud[200];
struct student * input()
{
	struct student *head,*p;
	head=NULL;
	p=(struct student *)malloc(LEN);
	scanf("%s",p->num);
	while(strcmp(p->num,"end")!=0)
	{
		scanf("%s %c %d %s %s",p->name,&p->sex,&p->age,p->grade,p->address);
		p->next=head;
		head=p;
		p=(struct student *)malloc(LEN);
		scanf("%s",p->num);
	}
	return(head);
}
void output(struct student *head)
{
	struct student *p;
	p=head;
	while(p!=NULL)
	{
		printf("%s %s %c %d %s %s\n",p->num,p->name,p->sex,p->age,p->grade,p->address);
		p=p->next;
	}
}
main()
{
	struct student *head;
	head=input();
	output(head);
	return 0;
}