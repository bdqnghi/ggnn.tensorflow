struct student
{
	char num[20];
	char name[30];
	char sex;
	int age;
	char score[20];
	char add[40];
	struct student *next;
};
void main()
{
	struct student *p1,*head;
	head=(struct student *)malloc(L);
	p1=head->next=NULL;
	scanf("%s",head->num);
	while(strcmp(head->num,"end")!=0)
	{
		p1=head;
		scanf(" %s %c %d %s %s\n",p1->name,&p1->sex,&p1->age,p1->score,p1->add);
		head=(struct student *)malloc(L);
		head->next=p1;
		scanf("%s",head->num);
	}
	free(head);
	head=p1;
	while(p1!=NULL)
	{
		printf("%s %s %c %d %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->add);
		p1=p1->next;
	}
}