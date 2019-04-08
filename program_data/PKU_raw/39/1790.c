struct stu
{
	char name[20];
	int chengji;
	int pingyi;
	char ganbu[1];
	char xibu[1];
	int lunwen;
	int scholarship;
	struct stu *next;
};
struct stu *creat(void)
{
	int i,n;
	struct stu *head;
	struct stu *p1,*p2;
	p1=p2=(struct stu*)malloc(LEN);
	head=NULL;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %s %s %d",p1->name,&p1->chengji,&p1->pingyi,p1->ganbu,p1->xibu,&p1->lunwen);
		if(i==0)head=p1;
		else p2=p1;
		if(i!=(n-1))p1=p2->next=(struct stu*)malloc(LEN);
		else {p2->next=NULL;}
	}
	return(head);
}
struct stu *px(struct stu *head)
{
	struct stu *p1,*p2,*p3,*p4;
	int k,add=0,max=0;
	for(p2=head;p2!=NULL;p2=p2->next)
	{
		p2->scholarship=0;
	}
	for(p1=head;p1!=NULL;p1=p1->next)
	{
		if((p1->chengji>80)&&(p1->lunwen>=1))
			p1->scholarship=p1->scholarship+8000;
		if((p1->chengji>85)&&(p1->pingyi>80))
			p1->scholarship=p1->scholarship+4000;
		if(p1->chengji>90)
			p1->scholarship=p1->scholarship+2000;
		if((p1->chengji>85)&&(p1->xibu[0]=='Y'))
			p1->scholarship=p1->scholarship+1000;
		if((p1->pingyi>80)&&(p1->ganbu[0]=='Y'))
			p1->scholarship=p1->scholarship+850;
	}
	for(p3=head;p3!=NULL;p3=p3->next)
	{
		k=0;
		for(p4=head;p4!=NULL;p4=p4->next)
		{
			if(p3->scholarship<p4->scholarship)
				k++;
		}
		if(k==0)
		{
			printf("%s\n%d\n",p3->name,p3->scholarship);
			break;
		}
	}
	for(p1=head;p1!=NULL;p1=p1->next)
	{
		add=add+p1->scholarship;
	}
	printf("%d\n",add);
	return head;
}
void main()
{
	struct stu *a,*b;
	a=creat();
	b=px(a);
}