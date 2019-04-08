struct list{
	char name[30];
	int final,ave,article;
	char member,west;
	long sum;
	struct list *next;
};

int n=0;
int num;
long total=0;
char namemax[30];
long max=0;

struct list *creat(int n)
{
	struct list *p1,*p2,*head;
	int i;	
	head=(struct list*)malloc(sizeof(struct list));
	p1=(struct list*)malloc(sizeof(struct list));
	head->next=p1;
	p1->next=NULL;
	p1->sum=0;
	scanf("%s %d %d %c %c %d\n",p1->name,&p1->final,&p1->ave,&p1->member,&p1->west,&p1->article);
	if(p1->final>80 && p1->article>=1)p1->sum+=8000;
	if(p1->final>85 && p1->ave>80)p1->sum+=4000;
	if(p1->final>90)p1->sum+=2000;
	if(p1->final>85 && p1->west=='Y')p1->sum+=1000;	
	if(p1->ave>80 && p1->member=='Y')p1->sum+=850;		
	total=total+p1->sum;
	max=p1->sum;		
	for(i=1;i<n;i++)
	{
		p2=p1;
		p1=(struct list*)malloc(sizeof(struct list));
		scanf("%s %d %d %c %c %d\n",p1->name,&p1->final,&p1->ave,&p1->member,&p1->west,&p1->article);
		if(p1->final>80 && p1->article>=1)p1->sum+=8000;
		if(p1->final>85 && p1->ave>80)p1->sum+=4000;
		if(p1->final>90)p1->sum+=2000;
		if(p1->final>85 && p1->west=='Y')p1->sum+=1000;	
		if(p1->ave>80 && p1->member=='Y')p1->sum+=850;	
		total=total+p1->sum;
		if(p1->sum>max){max=p1->sum;strcpy(namemax,p1->name);}		
		p2->next=p1;
	}
	p1->next=NULL;
	return head;
}

int main()
{
	struct list *head,*p;
	scanf("%d\n",&n);
	head=creat(n);
	printf("%s\n%d\n%d\n",namemax,max,total);
	return 0;
}

