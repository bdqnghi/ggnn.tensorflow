struct student
{
	char num[9];
	char name[20];
	char sex;
	int age;
	char grade[6];
	char add[11];
	struct student*next;
};
int n=0;
void main()
{
	struct student *head;
	struct student *p1,*p2,*temp,*p=NULL;
	p1=p2=(struct student*)malloc(LEN);
	scanf("%s",p1->num);
	scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->grade,p1->add);
	head=NULL;
	while(strcmp(p1->num,"end")!=0)
	{
		n=n+1;
		if(n==1)head=p1;
		else
			p2->next=p1;
		p2=p1;
		p1=(struct student*)malloc(LEN);
		scanf("%s",p1->num);
		if(strcmp(p1->num,"end")==0)break;
	    scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,&p1->grade,p1->add);
	}
	p2->next=NULL;
	do
	{
		p2=NULL;
		p1=head;
		while(p1->next!=NULL)
		{
			p2=p1;
			p1=p1->next;
		}
		if(p==NULL)
		{
			p=p1;
			temp=p->next=p2;
		}
		temp=temp->next=p2;
		p2->next=NULL;
	}while(head->next!=NULL);
	do{
		printf("%s %s %c %d %s %s\n",p->num,p->name,p->sex,p->age,p->grade,p->add);
		p=p->next;
	}while(p!=NULL);
}
