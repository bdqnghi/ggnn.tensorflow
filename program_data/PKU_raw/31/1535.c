struct student
{
	char id[1000];
	
    struct student *pre,*next;
};
void main()
{
	struct student *p1,*p2,*head1,*head2;
	int n=0;
	char temp[1000]; 
	p1=p2=NULL;
	while(gets(temp),strcmp(temp,"end")!=0)
	{
		n=n+1;
		p1=(struct student *)malloc(sizeof(struct student));
		p1->pre=NULL;
		p1->next=NULL;
		head1=NULL;
		strcpy(p1->id,temp);
		
		if(n==1)head1=p1;else {p2->next=p1;p1->pre=p2;}
		p2=p1;
	}
	
	head2=p2;
	while(p2!=NULL)
	{
		printf("%s\n",p2->id);
		p2=p2->pre;
	}
}  
