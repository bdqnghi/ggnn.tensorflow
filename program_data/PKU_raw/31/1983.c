struct student
{
	char num[10];
	char name[20];
	char sex;
	int age;
	char score[10];
	char add[20];
	struct student *next;
};
struct student *creat(void)
{
	struct student *head,*p1,*p2;
	p1=p2=(struct student *)malloc(LEN);
	scanf("%s %s %c %d %s %s",p1->num,p1->name,&p1->sex,&p1->age,p1->score,p1->add);
	head=p1;
loop:
	p1=(struct student *)malloc(LEN);
	scanf("%s %s %c %d %s %s",p1->num,p1->name,&p1->sex,&p1->age,p1->score,p1->add);
	if(strcmp(p1->num,"end")!=0)
	{
		p2->next=p1;
		p2=p1;
		goto loop;
	}
	else p2->next=NULL;
	return(head);
}
struct student *reverse(struct student *head)
{
	struct student *nowp,*prep,*nextp;
	prep=NULL;
	nowp=head;
	while(nowp!=NULL)
	{
		nextp=nowp->next;
		nowp->next=prep;
		prep=nowp;
		nowp=nextp;
	}
	return(prep);
}
int main()
{
	struct student *head,*head1;
	head=creat();
	head1=reverse(head);
	struct student *pt1;
	pt1=head1;
	while(pt1!=NULL)
	{
		printf("%s %s %c %d %s %s\n",pt1->num,pt1->name,pt1->sex,pt1->age,pt1->score,pt1->add);
		pt1=pt1->next;
	}
return 0;
}