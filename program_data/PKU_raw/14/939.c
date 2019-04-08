int max=0;

struct student
{ char id[20];
  int chinese;
  int math;
  int sum;
  int flag;
  struct student *next;
};
struct student *h;
int n,i;
struct student *creat()
{
	struct student *head,*p1,*p2;
	i=0;
	p1=p2=(struct student*)malloc(LEN);
	scanf("%s %d %d",p1->id,&p1->chinese,&p1->math);
	p1->sum=p1->chinese+p1->math;
	p1->flag=0;
	head=NULL;
	while(i<n)
	{
		i=i+1;
		if(i==1) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student*)malloc(LEN);
		scanf("%s %d %d",p1->id,&p1->chinese,&p1->math);
		p1->sum=p1->chinese+p1->math;
		p1->flag=0;
	}
	p2->next=NULL;
	return(head);
}
struct student *compare()
{
	struct student *p1,*p3;
	p1=h;
	max=p1->sum;
    do
	{
		if(p1->sum>max&&(p1->flag==0))
			max=p1->sum;
		p1=p1->next;
	}while(p1->next!=NULL);
	p1=h;
	do
	{
		if (p1->sum==max&&(p1->flag==0))
		{
			p3=p1;
			p1->flag=1;
			break;
		}
		p1=p1->next;
	}while(p1->next!=NULL);
	return(p3);

}
void main()
{   int j;
	struct student *p;
	scanf("%d",&n);
	h=creat();
	for(j=1;j<=3;j++)
	{
		p=compare();
		printf("%s %d\n",p->id,p->sum);
	}
}