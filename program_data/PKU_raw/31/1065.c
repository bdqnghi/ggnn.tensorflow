struct student
{
	char stuID[20];
	char name[20];
	char sex;
	int age;
	char score[10];
	char add[20];
	struct student*next;
};
int main()
{
	struct student *p,*a;
	char str[10]={"end"};
	p=(struct student*)malloc(sizeof(struct student));
	scanf("%s",p->stuID);
	p->next=NULL;
	while(strcmp(p->stuID,str)!=0)
	{
		scanf("%s %c %d %s %s",p->name,&(p->sex),&(p->age),p->score,p->add);
		a=p;
		p=(struct student*)malloc(sizeof(struct student));
		p->next=a;
		scanf("%s",p->stuID);
	}
	while(p->next!=NULL)
	{
		p=p->next;
		printf("%s %s %c %d %s %s\n",p->stuID,p->name,p->sex,p->age,p->score,p->add);
	}
	return 0;
}

