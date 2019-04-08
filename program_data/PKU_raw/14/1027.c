struct student
{
	int id;
	int yu;
	int shu;
	struct student *next;
};
void main()
{
    int n,i,j=0;
    
    
	struct student *head,*p1,*p2;
	
	scanf("%d",&n);
	head=p1=p2=(struct student *)malloc(LEN);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&p1->id,&p1->yu,&p1->shu);
		p1=(struct student *)malloc(LEN);
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	p1=head;
	for(i=200;i>10;i--)
	{
		p1=head;
		while(p1!=NULL)
		{
		    if((p1->yu+p1->shu)==i)
		    {
			    printf("%d %d\n",p1->id,i);
			    j++;
			
		    }
		    p1=p1->next;
		    if(j==3)break;
		}
		if(j==3)break;
	}
}