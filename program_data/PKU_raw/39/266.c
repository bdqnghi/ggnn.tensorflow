

struct student
{
	char a[20];
	int chengji;
	int pingyi;
	char x;
	char y;
	int h;
	struct student *next;
};

int n;
struct student *creat()
{
	struct student *head;
	struct student *p1,*p2;
	int m;
	scanf("%d",&m);
	n=1;
	p1=p2=(struct student *)malloc(LEN);
	scanf("%s %d %d %c %c %d",p1->a,&p1->chengji,&p1->pingyi,&p1->x,&p1->y,&p1->h);
	head=NULL;
	do
	{
		
		if(n==1){head=p1;p2=p1;}
		else {
			p1=(struct student *)malloc(LEN);
	        scanf("%s %d %d %c %c %d",p1->a,&p1->chengji,&p1->pingyi,&p1->x,&p1->y,&p1->h);
			p2->next=p1;
			p2=p1;}
		n=n+1;
	
	
	}while(n<=m);
	p2->next=NULL;
	return(head);
}
void main()

{
	struct student *q,*head,*p;

	int max;
	int s,sum;
	sum=0;

	head=creat();
	q=head;
	
	max=0;
    while(q!=NULL)
	{
		s=0;
		if(q->chengji >80 && (q->h )>=1)  s=s+8000;
		if(q->chengji >85 && q->pingyi >80 ) s=s+4000;
		if(q->chengji >90 ) s=s+2000;
		if(q->chengji >85 && q->y=='Y') s=s+1000;
		if(q->pingyi >80 && q->x=='Y') s=s+850;
	
		
		if(s>max) max=s;
		sum=sum+s;
		q=q->next;
	}

    p=head;
 while(p!=NULL)
 {
 	
		s=0;
		if(p->chengji >80 && (p->h )>=1)  s=s+8000;
		if(p->chengji >85 && p->pingyi >80 ) s=s+4000;
		if(p->chengji >90 ) s=s+2000;
		if(p->chengji >85 && p->y=='Y') s=s+1000;
		if(p->pingyi >80 && p->x=='Y') s=s+850;
		if(s==max)
		{	printf("%s\n%d\n",p->a,s) ;break;}
		p=p->next;
 }
 printf("%d",sum);
}
	