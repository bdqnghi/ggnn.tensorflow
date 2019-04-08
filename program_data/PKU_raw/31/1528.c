main()
{
	struct student
	{
		char num[100];
		char name[100];
		char sex[10];
		char age[10];
		char score[10];
		char address[100];
		struct student *next;
	};
	struct student *head,*p1;
	p1=(struct student*)malloc(sizeof(struct student));
	head=NULL;
	scanf("%s",p1->num);
	while(strcmp(p1->num,"end")!=0)
	{
		scanf("%s%s%s%s%s",p1->name,p1->sex,p1->age,p1->score,p1->address);
     	p1->next=head;
		head=p1;
		p1=(struct student*)malloc(sizeof(struct student));
		scanf("%s",p1->num);
	}
	p1=head;
	while(p1!=NULL)
	{
		printf("%s %s %s %s %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->address);
		p1=p1->next;
	}
}








