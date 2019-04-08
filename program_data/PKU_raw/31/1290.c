	struct stu
	{
	char num[30];
	char name[30];
	char sex;
	int age;
	float score;
	char add[30];
	struct stu *next;
	};
	struct stu *p1,*p2,*head;
int main()
{
	void result(struct stu*);

	p1=p2=(struct stu*) malloc(sizeof(struct stu));
	scanf("%s ",p1->num);
	scanf("%s ",p1->name);
	scanf("%c",&(p1->sex));
	scanf("%d",&(p1->age));
	scanf("%g",&(p1->score));
	scanf("%s",p1->add);
	head=p1;head->next=0;
	for(;;)
	{
		
	 p1=(struct stu*) malloc(sizeof(struct stu));
     p2->next=p1;
	scanf("%s",p1->num);
	if(p1->num[0]=='e'&&p1->num[1]=='n'&&p1->num[2]=='d')
	{p2->next=0;goto print;}
	scanf("%s ",p1->name);
	scanf("%c",&(p1->sex));
	scanf("%d",&(p1->age));
	scanf("%g",&(p1->score));
	scanf("%s",p1->add);
    p2=p1;
	}
    print:result(head);
	return 0;
}
void result(struct stu *x)
{
	if(x->next==0) 
	{printf("%s ",x->num);
	printf("%s ",x->name);
	printf("%c",x->sex);
	printf(" %d",x->age);
	printf(" %g",x->score);
	printf(" %s",x->add);
	printf("\n");
	}
	else 
	{
	result(x->next);
    printf("%s ",x->num);
	printf("%s ",x->name);
	printf("%c",x->sex);
	printf(" %d",x->age);
	printf(" %g",x->score);
	printf(" %s",x->add);}
	printf("\n");
}
