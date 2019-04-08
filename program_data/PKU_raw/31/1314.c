struct Student
{
	char num[20];
	char name[20];
	char sex;
	int age;
	char score[20];
	char add[20];
	struct Student *next;
};
int n=0;
struct Student*create()
{
	struct Student*head;
	struct Student*p1,*p2;
	n=0;
	p1=p2=(struct Student*)malloc(sizeof(struct Student));
	scanf("%s %s %c %d %s %s",p1->num,p1->name,&p1->sex,&p1->age,p1->score,p1->add);
	head=NULL;
	while(strcmp(p1->num,"end")!=0)
	{
		n=n+1;
		if(n==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct Student *)malloc(sizeof(struct Student));
		scanf("%s",p1->num);
		if(strcmp(p1->num,"end")!=0)
			scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->add);
		
		
	}
p2->next=NULL;

return (head);
}

void print(struct Student *head)
{
	struct Student*p;
	p=head;
	if(p->next!=NULL)print(p->next);
	printf("%s %s %c %d %s %s\n",p->num,p->name,p->sex,p->age,p->score,p->add);
	

}
int main()
{
	struct Student *head;
	head=create();
	print(head);
	return 0;
}
//
//p=p->next;