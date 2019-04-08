struct student
{
	char num[10];
	char name[20];
	char sex;
	int age;
	char score[10];
	char add[15];
	struct student *next;
};
void main()
{
	struct student *p1,*p2,*head;
	int n=0;
	p1=p2=(struct student*)malloc(LEN);
	p1->next=NULL;
	scanf("%s",p1->num);
	while(strcmp(p1->num,"end")!=0)
	{
		scanf("%s %c %d %s %s\n",p1->name,&p1->sex,&p1->age,p1->score,p1->add);
		n++;
		p2=(struct student*)malloc(LEN);
		p2->next=p1;
		p1=p2;
		scanf("%s",p1->num);
	}
	head=p1->next;
	p1=head;
	while(p1->next!=NULL)
	{
		printf("%s %s %c %d %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->add);
		p1=p1->next;
	}
	printf("%s %s %c %d %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->add);
}