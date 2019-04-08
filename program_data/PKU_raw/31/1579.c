struct stu
{
	char xinxi[100];
	struct stu *next;
};
void main()
{
	int len=1,i;
	struct stu *p1,*p2,*head,*new1,*newhead;
	p1=p2=head=(struct stu *)malloc(sizeof(struct stu));
	gets(p1->xinxi);
	while(strcmp(p1->xinxi,"end")!=0)
	{
		p1=(struct stu *)malloc(sizeof(struct stu));
		gets(p1->xinxi);
		if(strcmp(p1->xinxi,"end")==0)
			p2->next=NULL;
		else
		{
			p2->next=p1;
			p2=p1;
			len++;
		}
	}
	p1=head;
	for(i=0;i<len;i++)
	{
		p2=p1=head;
		while(p1->next!='\0')
		{
			p2=p1;
			p1=p1->next;
		}
		if(i==0)
		{
			newhead=new1=p1;
		}
		else
		{
			new1=new1->next=p1;
		}
		p2->next=NULL;
	}
	p1=newhead;
	for(i=0;i<len;i++)
	{
		printf("%s\n",p1->xinxi);
		p1=p1->next;
	}
}