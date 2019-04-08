
struct student 
{
	char num[30];
	int sum;
    struct student *next;
};

void main()
{
	int n,i;
	struct student *p1,*p2,*p3,*head;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		p1=(struct student*)malloc(sizeof(struct student));
		if(i==0)
			head=p1;
		scanf("%s%d",p1->num,&p1->sum);
		p1->next=NULL;
		
		
		if (i!=0)
		{
			p3=head;
			if(p1->sum>=60){
				
				while ((p1->sum<=p3->sum) && p3->next!=NULL)
			{
				p2=p3;
				p3=p3->next;
			}
			if (p1->sum > p3->sum)
			{
			     if(head==p3)
				 {
				     head=p1;
				     p1->next=p3;
				 }
			     else
				 {
				    p2->next=p1;
				    p1->next=p3;
				 }
			}
		    else
			{
			    p3->next=p1;
			    p1->next=NULL;
			}
			}
			else{for(p2=head;;p2=p2->next){if(p2->next==NULL)break;}
			    p2->next=p1;
				p1->next=NULL;}
		}
		

	
	}
	p1=head;
    for (i=0;(i<n&&p1!=NULL);i++)
	{
		printf("%s\n",p1->num);
		p1=p1->next;
	}
}
