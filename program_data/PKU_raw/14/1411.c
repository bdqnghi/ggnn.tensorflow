
struct stu1
{
	long num;
	int score1;
	int score2;
	struct stu1 *next;
};

struct stu1 *creat(void)
{
	int n,i=1;
	
	struct stu1 *h;
	
	struct stu1 *q1,*q2;
	scanf("%d",&n);

	q2=q1=(struct stu1 *)malloc(LEN1);
	
	h=NULL;
	while(i<=n)
	{
		scanf("%ld %d %d",&q1->num,&q1->score1,&q1->score2);
		
		
		if(i==1){h=q1;}
		else{q2=q1;}
		if(i!=n)
		{
		    
		    q1=q2->next=(struct stu1 *)malloc(LEN1);
		}
		else {q1->next=NULL;}
		i++;
	}
	return(h);
}

struct stu1 *turn(struct stu1 *h)
{
	int t=1;
	struct stu1 *p1,*p2;
	int m,n,w;
	for(p1=h,t=1;p1->next!=NULL,t<=3;p1=p1->next,t++)
	{
		p2=p1->next;
		while(p2!=NULL)
		{
			if((p1->score1+p1->score2)<(p2->score1+p2->score2))
			{
				m=p1->num;n=p1->score1;w=p1->score2;
				p1->num=p2->num;p1->score1=p2->score1;p1->score2=p2->score2;
				p2->num=m;p2->score1=n;p2->score2=w;
			}
			p2=p2->next;
		}
		printf("%ld %d\n",p1->num,(p1->score1+p1->score2));
	}
	return(h);
}
/*void print(struct stu1 *h)
{
	int t=1;
	struct stu1 *p;
	p=h;
	for(t=1;t<=3;t++)
	{
		printf("%ld %d\n",p->num,(p->score1+p->score2));
		p=p->next;
	}
}*/
void main()
{
	struct stu1 *ip/*,*is*/;
	ip=creat();
	/*is=*/turn(ip);
	/*print(is);*/
}