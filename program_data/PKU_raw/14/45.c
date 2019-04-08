struct student
{
	int num;
	int chinese;
	int maths;
	int sum;
	struct student *next;
};
int m,max[3]={0},t[3]={0};
struct student *head;
struct student *p1,*p2;
struct student *creat(int n)
{
	m=0;
	p1=p2=(struct student*)malloc(LEN);
	scanf("%d %d %d",&p1->num,&p1->chinese,&p1->maths);
	p1->sum=p1->chinese+p1->maths;
	head=NULL;
	while(m<n-1)
	{
		m=m+1;
		if(m==1)
			head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student*)malloc(LEN);
		scanf("%d %d %d",&p1->num,&p1->chinese,&p1->maths);
		p1->sum=p1->chinese+p1->maths;
	}
	p2->next=p1;
	p2=p1;
	p2->next=NULL;
	return(head);
}
void main()
{
	int n;
	scanf("%d",&n);
	creat(n);
    
	struct student *p1;
	p1=head;
     do
	{
		if(p1->sum>max[0])
		{
			max[0]=p1->sum;
			t[0]=p1->num;
		}
		p1=p1->next;
	}	while(p1!=NULL);
	printf("%d %d\n",t[0],max[0]);
	p1=head;
	do
	{
		if(p1->sum>max[1]&&p1->num!=t[0])
		{
			max[1]=p1->sum;
			t[1]=p1->num;
		}
		p1=p1->next;
	}	while(p1!=NULL);
		printf("%d %d\n",t[1],max[1]);
	p1=head;
	do
	{
		if(p1->sum>max[2]&&p1->num!=t[0]&&p1->num!=t[1])
	{
		max[2]=p1->sum;
		t[2]=p1->num;
	}
		p1=p1->next;
	}	while(p1!=NULL);
		printf("%d %d\n",t[2],max[2]);
}


