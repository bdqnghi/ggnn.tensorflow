struct stu
{
	char num[20];
	char name[20];
	char sex;
	int age;
	char score[20];
	char add[20];
	struct stu *next;
};
int main()
{
	struct stu *p1,*p2,*head;
	p1=(struct stu*)malloc(sizeof(struct stu));
	p1->next=NULL;
	p2=p1;
	p1=(struct stu*)malloc(sizeof(struct stu));
	while(1)
	{
		scanf("%s",p1->num);
		if(p1->num[0]=='e')
		{
			head=p2;
			p1->next=p2;
			break;
		}
		scanf("%s %c %d %s %s",p1->name,&(p1->sex),&(p1->age),p1->score,p1->add);
		p1->next=p2;
		p2=p1;
		p1=(struct stu*)malloc(sizeof(struct stu));
	}
	p1=head;
	while(p1->next!=NULL)
	{
		printf("%s %s %c %d %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->add);
		p1=p1->next;
	}
	return 0;
}