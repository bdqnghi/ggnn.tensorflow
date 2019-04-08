void main()
{
	struct student
	{
	char a[6];
	int c;
	int m;
	int s;
	struct student * next;
	};
	struct student * head;
	struct student * p1,* p2;
	struct student first={"",0,0,0,0};
	struct student second={"",0,0,0,0};
	struct student third={"",0,0,0,0};
	int n,i,j;
	char ch;
	scanf("%d",&n);
	p1=p2=(struct student * )malloc(LEN);
	for(j=0;j<6;j=j+1)
		p1->a[j]='\0';
	getchar();
	for(j=0;(ch=getchar())!=' ';j=j+1)
		p1->a[j]=ch;
	scanf("%d%d",&p1->c,&p1->m);
	p1->s=p1->c+p1->m;
	head=0;
	for(i=1;i<n;i=i+1)
	{
		if(i==1)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		p1=(struct student * )malloc(LEN);
		for(j=0;j<6;j=j+1)
			p1->a[j]='\0';
		getchar();
		for(j=0;(ch=getchar())!=' ';j=j+1)
			p1->a[j]=ch;
		scanf("%d%d",&p1->c,&p1->m);
		p1->s=p1->c+p1->m;
	}
	p2->next=0;
	for(p1=head;p1!=0;p1=p1->next)
	{
		if(p1->s>first.s)
		{
			third=second;
			second=first;
			first=* p1;
		}
		else if(p1->s>second.s)
		{
			third=second;
			second=* p1;
		}
		else if(p1->s>third.s)
		{
			third=* p1;
		}
		else 
			continue;
	}
	printf("%s %d\n",first.a,first.s);
	printf("%s %d\n",second.a,second.s);
	printf("%s %d\n",third.a,third.s);
}