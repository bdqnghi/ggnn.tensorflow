struct student
{
	char name[100];
	short int score1;
	short int score2;
	char x;
	char y;
	short int num;
	int sum;
	struct student *next;
};
void main()
{
	struct student *p1,*p2,*head;
	char name2[100];
	int max=0,s=0,i,n;
	p1=p2=head=NULL;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p1=(struct student *)malloc(sizeof(struct student));
		scanf("%s %d %d %c %c %d",p1->name,&p1->score1,&p1->score2,&p1->x,&p1->y,&p1->num);
		p1->sum=0;
        
		if(p1->score1>90)
		{
			p1->sum=2000;
			if(p1->score2>80)
			{
				p1->sum=p1->sum+4000;
				if(p1->x=='Y')p1->sum=p1->sum+850;
				if(p1->y=='Y')p1->sum=p1->sum+1000;
				if(p1->num>=1)p1->sum=p1->sum+8000;
			}
			else
			{
				if(p1->num>=1)p1->sum=p1->sum+8000;
				if(p1->y=='Y')p1->sum=p1->sum+1000;
			}
		}
		else if(p1->score1>85)
		{
			if(p1->score2>80)
			{
				p1->sum=p1->sum+4000;
				if(p1->x=='Y')p1->sum=p1->sum+850;
				if(p1->y=='Y')p1->sum=p1->sum+1000;
				if(p1->num>=1)p1->sum=p1->sum+8000;
			}
			else 
			{
				if(p1->y=='Y')p1->sum=p1->sum+1000;
				if(p1->num>=1)p1->sum=p1->sum+8000;
			}
		}
		else if(p1->score1>80)
		{
			if(p1->num>=1)p1->sum=p1->sum+8000;
			if(p1->score2>80&&p1->x=='Y')p1->sum=p1->sum+850;
		}
		else if(p1->score2>80&&p1->x=='Y')p1->sum=p1->sum+850;

		if(i==0)head=p1;
		else p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;

	max=head->sum;
	p1=head;
	while(p1!=NULL)
	{
		if(p1->sum>max){max=p1->sum;strcpy(name2,p1->name);}
		s=s+p1->sum;
		p1=p1->next;
		
	}
	printf("%s\n%d\n%d\n",name2,max,s);
}


