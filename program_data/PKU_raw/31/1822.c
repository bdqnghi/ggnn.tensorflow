struct student
{
	char NO[20];
	char name[20];
	char sex;
	int age;
	char score[20];
	char add[20];
	struct student *prev;
};
void main()
{
	struct student *END;
	struct student *p1,*p2;
	p1=p2=(struct student*)malloc(LEN);
	scanf("%s %s %c %d %s %s",&p1->NO,&p1->name,&p1->sex,&p1->age,&p1->score,&p1->add);
	p1->prev=0;
	p1=(struct student*)malloc(LEN);
	for(;;)
	{
		scanf("%s",&p1->NO);
		if(strcmp(p1->NO,"end")==0)
		{
			END=p2;
			break;
		}
		scanf(" %s %c %d %s %s",&p1->name,&p1->sex,&p1->age,&p1->score,&p1->add);
		p1->prev=p2;
		p2=p1;
		p1=(struct student*)malloc(LEN);
	}
	for(p1=END;p1!=0;)
	{
		printf("%s %s %c %d %s %s\n",p1->NO,p1->name,p1->sex,p1->age,p1->score,p1->add);
		p1=p1->prev;
	}
}