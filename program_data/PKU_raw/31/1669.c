struct student
{
	char num[50];
	char name[50];
	char sex[1];
	int age;
	float score;
	char address[50];
	struct student *next;
};
void main()
{
	struct student *head,*p1,*p2;
	p1=p2=(struct student*)malloc(sizeof(struct student));
	head=p1;
	scanf("%s%s%s%d%f%s",p1->num,p1->name,&p1->sex,&p1->age,&p1->score,p1->address);
	p2->next=NULL;
	while(strcmp(p1->num,"end")!=0)
	{
		p1=(struct student*)malloc(sizeof(struct student));
		scanf("%s",p1->num);
		if(strcmp(p1->num,"end")==0) break;
		scanf("%s%s%d%f%s",p1->name,&p1->sex,&p1->age,&p1->score,p1->address);
		p2=p1;
		p2->next=head;
		head=p1;
	}
	p2=head;
	while(p2!=NULL)
	{
		printf("%s %s %s %d %g %s\n",p2->num,p2->name,p2->sex,p2->age,p2->score,p2->address);
		p2=p2->next;
	}
}