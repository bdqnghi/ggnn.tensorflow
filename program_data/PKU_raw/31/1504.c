struct student
{
	struct student *next;
	char num[20];
	char name[20];
	char sex[2];
	int age;
	float score;
	char address[40];
};
struct student *creat()
{
	struct student *head,*p1,*p2;
	p1=(struct student *)malloc(LEN);
	scanf("%s",p1->num);
	if(strcmp(p1->num,"end")!=0)
	{
		scanf("%s%s%d%f%s",p1->name,p1->sex,&p1->age,&p1->score,p1->address);
		p2=p1;
		p2->next=NUL;
		p1=(struct student *)malloc(LEN);
		scanf("%s",p1->num);
		while(strcmp(p1->num,"end")!=0)
		{
			scanf("%s%s",p1->name,p1->sex);
			scanf("%d%f%s",&p1->age,&p1->score,p1->address);
			p1->next=p2;
			p2=p1;
			p1=(struct student *)malloc(LEN);
			scanf("%s",p1->num);
		}
		head=p2;
	}
	else
		head=NUL;
	return(head);
}
void print(struct student *head)
{
struct student *p;
p=head;
while(p!=NUL)
{
printf("%s %s %s %d %g %s\n",p->num,p->name,p->sex,p->age,p->score,p->address);
p=p->next;
}
}
int main()
{
struct student *head;
head=creat();
print(head);
return 0;
}

