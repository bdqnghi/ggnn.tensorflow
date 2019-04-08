struct student
{
	char name[20];
	int score1;
	int score2;
	char lead;
	char west;
	int paper;
	int sum;
	struct student *next;
};
int money(struct student *p)
{
	int z=0;
	if((p->score1>80)&&(p->paper>=1))
	   z+=8000;
    if((p->score1>85)&&(p->score2>80))
       z+=4000;
    if(p->score1>90)
       z+=2000;
    if((p->score1>85)&&(p->west=='Y'))
       z+=1000;
    if((p->score2>80)&&(p->lead=='Y'))
       z+=850;
    return(z);
}
void main()
{
	long total=0;
	struct student *p1,*p2,*p0,*head;
	int n,i;
	scanf("%d",&n);
	p1=p2=(struct student*)malloc(LEN);
	head=NULL;
	scanf("%s %d %d %c %c %d\n",p1->name,&p1->score1,&p1->score2,&p1->lead,&p1->west,&p1->paper);
	p0=p1;
	p1->sum=money(p1);
	total+=p1->sum;
	for(i=1;i<n;i++)
	{
	 	if(i==1)head=p1;
	 	else p2->next=p1;
	 	p2=p1;
	 	p1=(struct student*)malloc(LEN);
	 	scanf("%s %d %d %c %c %d\n",p1->name,&p1->score1,&p1->score2,&p1->lead,&p1->west,&p1->paper);
	 	p1->sum=money(p1);
	 	if(p0->sum<p1->sum)p0=p1;
	 	total+=p1->sum;
	}
	printf("%s\n%d\n%ld\n",p0->name,p0->sum,total);
}