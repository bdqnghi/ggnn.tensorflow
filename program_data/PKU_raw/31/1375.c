struct student
	{ char num[20];
	char name[20];
	char sex;
	int age;
	double score;
	char add[100];
	struct student*next;
	}*head,*p1;
void main()
{
	int n=0;
	p1=(struct student*)malloc(LEN);
	scanf("%s",p1->num);
	while(p1->num[0]!='e')
	{
scanf("%s %c%d%lf%s",p1->name,&p1->sex,&p1->age,&p1->score,p1->add);
		n++;
		if(n==1)p1->next=NULL;
		else p1->next=head;
head=p1;
		p1=(struct student*)malloc(LEN);
		scanf("%s",p1->num);
	}
	p1=head;
	do
	{
		printf("%s %s %c %d %g %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->add);
		p1=p1->next;
	}
while(p1!=NULL);
}