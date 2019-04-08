struct student
{
	char inf[100];
	struct student*next;
};
int n;
struct student*creat(void)
{
	struct student*head;
	struct student*p1,*end;
	n=0;
	p1=(struct student*) malloc(LEN);
	gets(p1->inf);
	head=end=NULL;
	while(strcmp(p1->inf,"end")!=0)
	{
		
		n=n+1;
		if(n==1)
		{
		  p1->next=head;
		  end=p1;

		}
		else {p1->next=end;
		       end=p1;}
		p1=(struct student*) malloc(LEN);
		gets(p1->inf);
	
	}
	return end;
}
void print(struct student*end)
{
	struct student *p1;
	p1=end;
while(p1!=NULL)
{
		printf("%s\n",p1->inf);
		p1=p1->next;
	}

}
void main()
{
	struct student *end;
	end=creat();
	print(end);
}

