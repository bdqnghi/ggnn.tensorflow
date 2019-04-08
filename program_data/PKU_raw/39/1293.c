struct student
{
	char name[21];
	int grade;
	int ping;
	char a;
	char w;
	int pa;
	int money;
	struct student *next;
};
struct student *p1,*p2,*head,*max;
void main()
{
	int sum=0;
	int N,i,maxmoney;
	head=p2=p1=(struct student *)malloc(LEN);
	scanf("%d",&N);
	for(i=0;i<N;i++)
    {
		
		scanf("%s %d %d %c %c %d",p1->name,&p1->grade,&p1->ping,&p1->a,&p1->w,&p1->pa);
		p1->money=0;
		if(p1->grade>80&&p1->pa) p1->money=8000+p1->money;
		if(p1->grade>85&&p1->ping>80) p1->money=4000+p1->money;
	    if(p1->grade>90) p1->money=2000+p1->money;
        if(p1->grade>85&&p1->w=='Y') p1->money=1000+p1->money;
        if(p1->ping>80&&p1->a=='Y') p1->money=850+p1->money;
		sum=sum+p1->money;
		p1=(struct student *)malloc(LEN);
		p2->next=p1;
		p2=p1;
	}
	p1->next=NULL;
	max=head;
	p1=head->next;
	maxmoney=head->money;
	while(p1->next)
	{
		if(p1->money>maxmoney) 
		{
			maxmoney=p1->money;
			max=p1;
		}
		p1=p1->next;
	}
	printf("%s\n%d\n%d",max->name,maxmoney,sum);
}




