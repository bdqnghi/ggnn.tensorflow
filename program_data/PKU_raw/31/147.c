struct student
{
	char num[20];
	char name[20];
	char sex;
	int age;
	char score[50];
	char add[20];
	struct student *before;
};

struct student *creat(void)
{
	struct student *head;
	struct student *p1,*p2;
	p1=(struct student* )malloc(len);
	p1->before=NULL;
	p2=p1;
	do
	{
		scanf("%s",p1->num);
		if(p1->num[0]=='e')
		{
			head=p2;
			free(p1);
	        return(head);
		}
		else
		{
			scanf("%s %c %d %s",p1->name,&p1->sex,&p1->age,p1->score);
		    scanf("%s",p1->add);
			p2=p1;
			p1=(struct student*)malloc(len);
			p1->before=p2;
		}
	}
	while(1);
}
void main()
{
	struct student *head1=creat();
	struct student *q=head1;
	while(q!=NULL)
	{	printf("%s %s %c %d %s %s\n",q->num,q->name,q->sex,q->age,q->score,q->add);
	    q=q->before;
	}
}
