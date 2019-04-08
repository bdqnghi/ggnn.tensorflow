struct student
{
	char name[20];
	int score1;
	int score2;
	char mon;
	char west;
	int paper;
	int sum;
	struct student *next;
};

struct student *creat(int n)
{
	struct student *p1,*p2,*head;
	int many;
	int n1;
	n1=n;
	p1=p2=(struct student*)malloc(LEN);
	head=NULL;
	many=0;
	while(many<n1)
	{
		scanf("%s %d %d %c %c %d",&p1->name,&p1->score1,&p1->score2,&p1->mon,&p1->west,&p1->paper);
		many++;
		if(many==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student*)malloc(LEN);
	}
	p2->next=NULL;
	return(head);
}

void print(struct student *head)
{
	struct student *p,*pmax;
	p=head;
	int total=0,max=0;
	if(head!=NULL)
		do
		{
			p->sum=0;
			if(p->score1>80&&p->paper>=1)p->sum=p->sum+8000;
			if(p->score1>85&&p->score2>80)p->sum=p->sum+4000;
			if(p->score1>90)p->sum=p->sum+2000;
			if(p->score1>85&&p->west=='Y')p->sum=p->sum+1000;
            if(p->score2>80&&p->mon=='Y')p->sum=p->sum+850;
			total=total+p->sum;
			p=p->next;
		}while(p!=NULL);
		p=head;
		do
		{
			if(p->sum>max){max=p->sum;pmax=p;}
			p=p->next;
		}while(p!=NULL);
		printf("%s\n%d\n%d\n",pmax->name,max,total);
}

void main()
{
	int n;
	struct student *head;
	scanf("%d",&n);
	head=creat(n);
	print(head);
}

		


