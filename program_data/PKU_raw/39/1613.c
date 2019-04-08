struct info
{
	char name[20];
	int final;
	int ass;
	char gan;
	char west;
	int paper;
    struct info *next;
};
struct info *create(int n)
{
    struct info *p1,*p2,*head;
	int i;
	p1=(struct info*)malloc(sizeof(struct info));
	scanf("%s %d %d %c %c %d",p1->name,&p1->final,&p1->ass,&p1->gan,&p1->west,&p1->paper);
    p1->next=NULL;
	head=p1;
	p2=p1;
    for(i=1;i<n;i++)
	{
		p1=(struct info*)malloc(sizeof(struct info));
	    scanf("%s %d %d %c %c %d",p1->name,&p1->final,&p1->ass,&p1->gan,&p1->west,&p1->paper);
        p1->next=NULL;
		p2->next=p1;
		p2=p1;
	}
	return head;
}
int main()
{
	int n;
	struct info *head;
	struct info *p1;
	int i,m,sum,max;
	char namemax[22];
	scanf("%d",&n);
	head=create(n);
    
	p1=head;
	sum=0;
	max=0;
	
	for(i=0;i<n;i++)
	{
	m=0;
	if(p1->final>80&&p1->paper>=1)
	{m+=8000;}
	if(p1->final>85&&p1->ass>80)
	{m+=4000;}
	if(p1->final>90)
	{m+=2000;}
    if(p1->final>85&&p1->west=='Y')
	{m+=1000;}
	if(p1->ass>80&&p1->gan=='Y')
	{m+=850;}
	if(m>max)
	{max=m;strcpy(namemax,p1->name);}
	p1=p1->next;
	}
    p1=head;
	for(m=0,i=0;i<n;i++)
	{
	if(p1->final>80&&p1->paper>=1)
	{m+=8000;}
	if(p1->final>85&&p1->ass>80)
	{m+=4000;}
	if(p1->final>90)
	{m+=2000;}
    if(p1->final>85&&p1->west=='Y')
	{m+=1000;}
	if(p1->ass>80&&p1->gan=='Y')
	{m+=850;}
	p1=p1->next;
	}
    sum=m;
	printf("%s\n%d\n%d\n",namemax,max,sum);
}
	

