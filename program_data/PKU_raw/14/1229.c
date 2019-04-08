int main()
{
	struct stu
	{
		char id[9];
		int chn;
		int math;
		int both;
		struct stu *next;
	};
	int n,i;
	scanf("%d",&n);
	struct stu *head,*p1,*p2;
	for(i=0;i<n;i++)
	{
		if(i==0) 
		{
			head=(struct stu*)malloc(sizeof(struct stu));
			p1=head;
		}
		else
		{
			p1->next=(struct stu*)malloc(sizeof(struct stu));
			p1=p1->next;
		}
		scanf("%s%d%d",p1->id,&p1->chn,&p1->math);
		p1->both=p1->chn+p1->math;
	}
	p1->next=NULL;
	int max;
	for(i=0;i<3;i++)
	{
		max=head->both;
	    p1=head;
		do
		{
		   p1=p1->next;
		   if(max<p1->both)
		   {
			 max=p1->both;
			 p2=p1;
		   }
		}while(p1->next!=NULL);
		printf("%s %d\n",p2->id,p2->both);
		p2->both=0;
	}
	return 0;
}