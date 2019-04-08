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
struct Student *creat()
{
	int i;
	struct Student *head,*p1,*p2;
	p1=(struct Student *)malloc(LEN);
	scanf("%s",p1->num);
	for(i=0;p1->num[0]!='e';i++)
	{
		head=p1;
		scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->add);
		if(i==0) p1->next=NULL;
		else p1->next=p2;
		p2=p1;
		p1=(struct Student *)malloc(LEN);
		scanf("%s",p1->num);
	}
	return head;
}

int main()
{
	struct Student *head,*p;
	head=creat();
	p=head;
	while(p!=NULL)
	{
		printf("%s %s %c %d %s %s\n",p->num,p->name,p->sex,p->age,p->score,p->add);
		p=p->next;
	}
	return 0;
}
