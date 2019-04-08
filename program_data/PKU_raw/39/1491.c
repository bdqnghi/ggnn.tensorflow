struct stu
{
	char name[21];
	int final;
	int comment;
	char leader[2];
	char west[2];
	int paper;
	struct stu *next;
	int total;
}*head,*p1,*p2;
void main()
{
	int n,i,max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p1=(struct stu*)malloc(sizeof(struct stu));
		if(i==0)head=p1;
		else p2->next=p1;
		p2=p1;
		scanf("%s%d%d%s%s%d",p1->name,&p1->final,&p1->comment,p1->leader,p1->west,&p1->paper);
	}
	p2->next=NULL;
	for(p1=head;p1!=NULL;p1=p1->next)
	{
		p1->total=0;
		if(p1->final>80&&p1->paper!=0){p1->total+=8000;}
		if(p1->final>85&&p1->comment>80){p1->total+=4000;}
		if(p1->final>90){p1->total+=2000;}
		if(p1->final>85&&p1->west[0]=='Y'){p1->total+=1000;}
		if(p1->comment>80&&p1->leader[0]=='Y'){p1->total+=850;}
	}
	max=head->total;
	for(p1=head->next;p1!=NULL;p1=p1->next)
		max=max>p1->total?max:p1->total;
	for(p1=head;p1!=NULL;p1=p1->next)
	{
		if(p1->total==max)break;
	}
	printf("%s\n%d\n",p1->name,max);
	max=0;
	for(p1=head;p1!=NULL;p1=p1->next)
		max+=p1->total;
	printf("%d\n",max);
}