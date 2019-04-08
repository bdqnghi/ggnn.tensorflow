struct stud
{
	char num[30];
	char name[20];
	char sex;
	int age;
	char score[10];
	char address[30];
	struct stud *next;
};
int main()
{
	struct stud *head,*p1,*p2,*p;
	int n=0;
	p1=p2=(struct stud *)malloc(sizeof(struct stud));
	scanf("%s",&p1->num);
	if (strcmp(p1->num,"end")==0) return 0;
	scanf("%s %c %d %s %s",&p1->name,&p1->sex,&p1->age,&p1->score,&p1->address);
	head=Null;
	while(1)
	{
		n++;
		if (n==1) p1->next=Null;
		else p1->next=p2;
		p2=p1;
		p1=(struct stud *)malloc(sizeof(struct stud));
		scanf("%s",&p1->num);
		if (strcmp(p1->num,"end")==0) break;
		scanf("%s %c %d %s %s",&p1->name,&p1->sex,&p1->age,&p1->score,&p1->address);
	}
	head=p2;
	p=head;
	do
	{
		printf("%s %s %c %d %s %s\n",p->num,p->name,p->sex,p->age,p->score,p->address);
		p=p->next;
	}while(p!=Null);
	return 0;
}