void main()
{
	struct stu
	{
		char num[21];
		char name[31];
		char sex[2];
		int age;
		float score;
		char address[31];
		struct stu *next;
		struct stu *pre;
	};
	struct stu *head,*p1,*p2,*tail;
	head=(struct stu *)malloc(sizeof(struct stu));
	p1=head;
	p2=p1;
	p1->pre=NULL;
	scanf("%s",&p1->num);
	if (strcmp(p1->num,"end"))
	{
	while(strcmp(p1->num,"end"))
	{
		scanf("%s",&p1->name);
		scanf("%s",&p1->sex);
		scanf("%d",&p1->age);
		scanf("%f",&p1->score);
		scanf("%s",&p1->address);
		p2=(struct stu*)malloc(sizeof(struct stu));
		p1->next=p2;
		p2->pre=p1;
		p1=p2;
		scanf("%s",&p1->num);
	}
	tail=p1->pre;
	free(p1);
	tail->next=NULL;
	p1=tail;
	p2=p1;
	while(p1!=NULL)
	{
		printf("%s %s %s %d %g %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->address);
		p2=p1->pre;
		p1=p2;
	}
	p1=head;
	p2=p1;
	while(p1!=NULL)
	{
		p2=p1->next;
		free(p1);
		p1=p2;
	}
    }
	else
		free(head);
}