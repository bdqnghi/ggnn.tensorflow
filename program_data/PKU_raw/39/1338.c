struct student
{
	char name[20];
	int aver;
	int bj;
	char a;
	char b;
	int lunwen;
	int sum;
	struct student *next;
};
struct student *creat(int n)
{
	int i;
	struct student *head,*p1,*p2;
	p1=p2=(struct student *)malloc(LEN);
	scanf("%s %d %d %c %c %d",p1->name,&p1->aver,&p1->bj,&p1->a,&p1->b,&p1->lunwen);
    head=p1;
	for(i=1;i<n;i++)
	{
		p1=(struct student *)malloc(LEN);
		scanf("%s %d %d %c %c %d",p1->name,&p1->aver,&p1->bj,&p1->a,&p1->b,&p1->lunwen);
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	return(head);
}
int main()
{
	int n;
	scanf("%d",&n);
	struct student *head,*pt1,*pt2;
	head=creat(n);
	pt1=head;
	while(pt1!=NULL)
	{
		pt1->sum=0;
		if((pt1->aver>80)&&(pt1->lunwen>=1)) pt1->sum=pt1->sum+8000;
		if((pt1->aver>85)&&(pt1->bj>80)) pt1->sum=pt1->sum+4000;
		if(pt1->aver>90) pt1->sum=pt1->sum+2000;
		if((pt1->aver>85)&&(pt1->b=='Y')) pt1->sum=pt1->sum+1000;
		if((pt1->bj>80)&&(pt1->a=='Y')) pt1->sum=pt1->sum+850;
		pt1=pt1->next;
	}
	pt1=head;
	pt2=pt1->next;
	while(pt2!=NULL)
	{
		if((pt2->sum)>(pt1->sum))	pt1=pt2;
		pt2=pt2->next;
	}
	printf("%s\n",pt1->name);
	printf("%d\n",pt1->sum);
	pt1=head;
    long s=0;
	while(pt1!=NULL)
	{
		s=s+pt1->sum;
		pt1=pt1->next;
	}
	printf("%ld",s);
return 0;
}


