struct stu
{
	char num[15];
	char name[20];
	char sex;
	int age;
	char score[10];
	char addr[15];
	struct stu* next;
};
int main()
{
	struct stu* p1,*p2;
	p1=(struct stu*)malloc(len);
	scanf("%s%s %c%d%s%s",p1->num,p1->name,&p1->sex,&p1->age,p1->score,p1->addr);
	p1->next=NULL;
	while(1)
	{
		p2=(struct stu*)malloc(len);
		scanf("%s",p2->num);
		if(p2->num[0]=='e')
			break;
        scanf("%s %c%d%s%s",p2->name,&p2->sex,&p2->age,p2->score,p2->addr);
		p2->next=p1;
		p1=p2;
	}
	while(p1!=NULL)
	{
		printf("%s %s %c %d %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->addr);
		p1=p1->next;
	}	
	return 0;
}