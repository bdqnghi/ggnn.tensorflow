struct student
{
	char num[200];
	struct student *next;
};
void main()
{
	int n,i,k,j;
	    struct student *head;
		struct student *p1,*p2;
		struct student *newhead,*nnew;
		n=0;
		p1=p2=(struct student *)malloc(sizeof(struct student));
		gets(p1->num);
		head=NULL;
		while(strcmp(p1->num,"end")!=0)
		{
			n=n+1;
			if(n==1)
				head=p1;
			else
				p2->next=p1;
			p2=p1;
			p1=(struct student *)malloc(sizeof(struct student));
			gets(p1->num);
		}
		p2->next=NULL;
		for(i=0;i<n;i++)
		{
			p2=p1=head;
			while(p1->next!=NULL)
			{
				p2=p1;
				p1=p1->next;
			}
			if(i==0)
				newhead=nnew=p1;
			else
				nnew=nnew->next=p1;
			p2->next=NULL;
		}
		p1=newhead;
		for(i=0;i<n;i++)
		{
			printf("%s",p1->num);
			p1=p1->next;
			printf("\n");
		}
}

