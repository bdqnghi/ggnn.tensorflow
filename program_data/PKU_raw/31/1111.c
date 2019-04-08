int main()
{
	int n=0;
	struct student
	{
		char num[20];
		char name[20];
		char sex[5];
		int age;
		char score[10];
		char add[100];
		struct student *next;
	}*p1,*head,*p2,*end,*p3,*heade;
	head=NULL;
	p2=p1=(struct student *)malloc(LEN);
	scanf("%s",p1->num);
	if(p1->num[0]!='e')
	{
		head=p1;
		scanf("%s %s %d %s %s",p1->name,p1->sex,&p1->age,p1->score,p1->add);
		n=1;
	}
	p1=(struct student *)malloc(LEN);
	scanf("%s",p1->num);
	while(p1->num[0]!='e')
	{
		scanf("%s %s %d %s %s",p1->name,p1->sex,&p1->age,p1->score,p1->add);
		n++;
		p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(LEN);
		scanf("%s",p1->num);
	}
	p2->next=NULL;
	end=p2;
	if(n==1)
		printf("%s %s %s %d %s %s\n",head->num,head->name,head->sex,head->age,head->score,head->add);
	else if(n==2)
	{
		printf("%s %s %s %d %s %s\n",end->num,end->name,end->sex,end->age,end->score,end->add);
		printf("%s %s %s %d %s %s\n",head->num,head->name,head->sex,head->age,head->score,head->add);
	}
	else
	{
		p1=head;
		p2=head->next;
		p3=p2->next;
		p1->next=NULL;
		p2->next=p1;
		while(p3->next!=NULL)
		{
			p1=p2;
			p2=p3;
			p3=p2->next;
			p2->next=p1;
		}
		p3->next=p2;
		heade=p3;
		p1=heade;
		while(p1!=NULL)
		{
			printf("%s %s %s %d %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->add);
			p1=p1->next;
		}
	}
	return 0;
}