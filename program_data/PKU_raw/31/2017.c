struct stu
{
	char xuehao[100];
	
	struct stu*next;
};
void main()
{
	int n=0;
	struct stu *head=NULL,*p1=NULL,*p2=NULL;
	p1=p2=(struct stu*)malloc(LEN);
    gets(p1->xuehao);
	
	while(strcmp(p1->xuehao,"end")!=0)
	{
		
		
		n++;
		if(n==1)
		{
			
			p1->next=NULL;
		}
		else 
		
			p1->next=p2;
			p2=p1;
		    p1=(struct stu*)malloc(LEN);
			gets(p1->xuehao);
		
	
	}
	while(p2->next!=NULL)
	{
		printf("%s\n",p2->xuehao);
		p2=p2->next;
	}
    printf("%s\n",p2->xuehao);
	
}

	
    
	