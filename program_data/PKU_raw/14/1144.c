struct student
{int num;
 int yu;
 int shu;
 int score;
 struct student *next;
};
void main()
{
	int n,i,max;
	struct student *p1,*p2,*head;
	p1=p2=head=NULL;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p1=(struct student *)malloc(sizeof(struct student));

		scanf("%d %d %d",&p1->num,&p1->yu,&p1->shu);
	
		p1->score=p1->yu+p1->shu;
	    if(i==0)head=p1;
		else p2->next=p1;
		p2=p1;
	}
	    p2->next=NULL;
	

		for(i=0;i<3;i++)
		{
			p2=p1=head;
			max=p1->score;
			while(p1!=NULL)
			{
				if(p1->score>max){max=p1->score;p2=p1;}
				p1=p1->next;
			}
			printf("%d %d\n",p2->num,max);
            p1=head;
			while(p1->next!=p2)
			{
				p1=p1->next;
			}
			p1->next=p2->next;
		}
}
