struct student
{
	char num[10];
	char name[20];
	char s;
	int age;
	char score[20];
	char address[30];
	struct student *next;
};
int main()
{
	struct student *p1,*p2;
	p1=(struct student *)malloc(LEN);
	p1->next=0;
	scanf("%s %s %c %d %s %s",p1->num,p1->name,&p1->s,&p1->age,&p1->score,p1->address);
    while(1)
	{
		p2=p1;
		p1=(struct student *)malloc(LEN);
		p1->next=p2;
        scanf("%s %s %c %d %s %s",p1->num,p1->name,&p1->s,&p1->age,&p1->score,p1->address);
		if(p1->num[0]==	'e')
			break;
	}
     while(p1->next!=0)
	 {
		p1=p1->next;
		printf("%s %s %c %d %s %s\n",p1->num,p1->name,p1->s,p1->age,p1->score,p1->address);
	}
	 return 0;
}