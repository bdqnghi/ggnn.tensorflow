struct student
{
	char num[15];
	char name[20];
	char sex;
	int age;
	char score[10];
	char add[30];
	struct student *next;
};
int main()
{
	int n,i;
	struct student *head,*p1,*p2;
	n=0;
	p1=p2=(struct student *)malloc(LEN);
	p1->next=NULL;
	scanf("%s ",p1->num);
	while(strcmp(p1->num,"end")!=0)
	{
		n++;
		scanf("%s %c %d %s %s\n",p1->name,&p1->sex,&p1->age,p1->score,p1->add);
		p2=(struct student *)malloc(LEN);
		p2->next=p1;
		p1=p2;
		scanf("%s ",p1->num);
	}
	head=p1->next;
	p1=p2=head;
	for(i=0;i<n;i++)
	{
		printf("%s %s %c %d %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->add);
		p1=p2->next;
		p2=p1;
	}
}
