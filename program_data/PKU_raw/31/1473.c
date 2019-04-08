struct student
{
	char num[10];
	char name[30];
	char sex[2];
	char age[5];
	char score[10];
	char add[20];
	struct student *prev;
};
struct student *create(void)
{
	struct student *p1,*p2;	
	p1=(struct student *)malloc(sizeof(struct student));
	scanf("%s",p1->num);
	if(strcmp(p1->num,"end"))
	{
		scanf("%s%s%s%s%s",p1->name,p1->sex,p1->age,p1->score,p1->add);
		p2=p1;
		p1->prev=NULL;
	}
	while(strcmp(p1->num,"end"))
	{
		p1=(struct student *)malloc(sizeof(struct student));
		scanf("%s",p1->num);
		if(strcmp(p1->num,"end"))
		{
			scanf("%s%s%s%s%s",p1->name,p1->sex,p1->age,p1->score,p1->add);			
			p1->prev=p2;
			p2=p1;
		}
	}
	return(p2);
}
void main()
{
	struct student *p1;
	p1=create();
	while(p1!=NULL)
	{
		printf("%s %s %s %s %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->add);
		p1=p1->prev;
	}
}