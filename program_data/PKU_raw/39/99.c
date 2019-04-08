struct student
{
    char name[20];
	int aver;
	int judge;
	char a;
	char b;
	int punish;
	int prize;
	struct student *next;
};

int stu_num;


struct student *creat(void)
{
	struct student *head,*p1,*p2;
	int n;
	p1=p2=(struct student *)malloc(LEN);
	scanf("%s %d %d %c %c %d",p1->name,&p1->aver,&p1->judge,&p1->a,&p1->b,&p1->punish);
	head=NULL;
	n=0;
	while(n<stu_num-1)
	{
		n++;
		if(n==1)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(LEN);
		scanf("%s %d %d %c %c %d",p1->name,&p1->aver,&p1->judge,&p1->a,&p1->b,&p1->punish);
	}
	p2->next=p1;
	p1->next=NULL;
	return(head);
}


void main()
{
	struct student *head,*q1,*q2;
	int sum=0;
	scanf("%d",&stu_num);
    head=creat();
	q1=head;
    q2=head;
	while(q1!=NULL)
	{
		q1->prize=0;
		if(q1->aver>80&&q1->punish>0)
			q1->prize+=8000;
		if(q1->aver>85&&q1->judge>80)
			q1->prize+=4000;
		if(q1->aver>90)
            q1->prize+=2000;
		if(q1->aver>85&&q1->b=='Y')
            q1->prize+=1000;
		if(q1->judge>80&&q1->a=='Y')
            q1->prize+=850;
		sum+=q1->prize;
		if(q2->prize<q1->prize)
			q2=q1;
		q1=q1->next;
	}
	printf("%s\n%d\n%d\n",q2->name,q2->prize,sum);
}
