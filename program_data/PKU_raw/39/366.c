void main()
{
	struct student
	{
		char name[1000];
		int s1,s2,gb,west,paper,sum;
		struct student *next;
	} *p,*head;
	int n,i,k,l,max=0;
	long ssum=0;
	l=sizeof(struct student);
	head=(struct student*)malloc(l);
	p=head;
	p->next=NULL;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",p->name,&p->s1,&p->s2,&p->gb,&p->west,&p->paper);
		p->west-='N';p->gb-='N';
		if (n-i-1) {p->next=malloc(l);p=p->next;p->next=NULL;}
	}
	p=head;
	do
	{
		p->sum=0;
		if (p->s1>80&&p->paper) p->sum+=8000;
		if (p->s1>85&&p->s2>80) p->sum+=4000;
		if (p->s1>90) p->sum+=2000;
		if (p->s1>85&&p->west) p->sum+=1000;
		if (p->s2>80&&p->gb) p->sum+=850;
		if (p->sum>max) max=p->sum;
		p=p->next;
	}
	while(p);
	p=head;
	k=1;
	do
	{
		if (p->sum==max&&k) {printf("%s\n%d\n",p->name,p->sum);k=0;}
		ssum+=p->sum;
		p=p->next;
	}
	while (p);
	printf("%ld",ssum);
}