struct stu
{
	char num[20];
	char name[20];
	char sex;
	int age;
	char grade[20];
	char add[20];
	struct stu *p;
};
int main ()
{
	struct stu *p1,*p2;
	p1=(struct stu*)malloc(sizeof(struct stu));
	p1->p=NULL;
	scanf("%s %s %c %d %s %s",p1->num,p1->name,&p1->sex,&p1->age,p1->grade,p1->add);
	while(1)
	{		
		p2=p1;
		p1=(struct stu*)malloc(sizeof(struct stu));
		p1->p=p2;
		scanf("%s %s %c %d %s %s",p1->num,p1->name,&p1->sex,&p1->age,p1->grade,p1->add);
		if(p1->num[0]=='e')
			break;
	}
	while(p1->p!=NULL)
	{
		p1=p1->p;
		printf("%s %s %c %d %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->grade,p1->add);
	}
	return 0;
}