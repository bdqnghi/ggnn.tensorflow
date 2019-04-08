struct student
{
	char num[30];
	char name[30];
	char sex;
	int age;
	char score[30];
	char add[30];
	struct student *next;
};
int n=0;
void main()
{
	struct student *head,*p1,*p2;
	p1=p2=(struct student *)malloc(LEN);
	scanf("%s %s %c %d %s %s",p1->num,p1->name,&p1->sex,&p1->age,p1->score,p1->add);
	while(1)
	{
		n++;
		if(n==1) p1->next=NULL;
		else p1->next=p2;
		p2=p1;
		p1=(struct student *)malloc(LEN);
		scanf("%s",p1->num);
		if(strcmp(p1->num,"end")==0) break;
		scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->add);
	}
	head=p2;
	p1=head;
	printf("%s %s %c %d %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->add);
	do
	{
		p1=p1->next;
		printf("%s %s %c %d %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->add);
		
	}
	while(p1->next!=NULL);
}