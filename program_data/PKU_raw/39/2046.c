//#include<stdafx.h>

struct stu
{
	char name[20];
	int final;
	int rate;
	char leader;
	char west;
	int paper;
	int money;
	struct stu *next;
};
struct stu *max;
struct stu *p1,*p2,*head;
int prize(struct stu *p)
{
	p->money=0;
	if(p->final>80&&p->paper>0)
		p->money+=8000;
	if(p->final>85&&p->rate>80)
		p->money+=4000;
	if(p->final>90)
		p->money+=2000;
	if(p->final>85&&p->west=='Y')
		p->money+=1000;
	if(p->rate>80&&p->leader=='Y')
		p->money+=850;
	return(p->money);
}
struct stu *create(int n)
{
	
	int i=0;

	p1=p2=(struct stu *)malloc(sizeof(struct stu));
	head=0;
	max=p2;
	while(i<n)
	{
		
		if(i==0)
			head=p1;
		else p2->next=p1;
		p2=p1;
		scanf("%s %d %d %c %c %d",p2->name,&p2->final,&p2->rate,
			&p2->leader,&p2->west,&p2->paper);
		p2->money=prize(p2);
		if(p2->money>max->money)
			max=p2;
		p1=(struct stu *)malloc(sizeof(struct stu));
		i++;
	}
	p2->next=0;
	return(head);
}

int sum(struct stu *head)
{
	struct stu *p;
	int sum;
	p=head;
	sum=p->money;
	while(p->next!=0)
	{
		p=p->next;
		sum+=p->money;
	}
	return(sum);
}
void main()
{
	int n;

	scanf("%d",&n);
	p1=create(n);
	printf("%s\n%d\n",max->name,max->money);
	printf("%d",sum(p1));


}