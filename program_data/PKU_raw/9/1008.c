struct student
{
	char str[10];
	int a;

	struct student *next;
};

struct student *creat(int n)
{
	int i=0;
	struct student *head;
	struct student *p1,*p2;

	p1=p2=(struct student *)malloc(LEN);
	scanf("%s %d",&p1->str,&p1->a);
    head=NULL;
	while(i<n-1)
	{
		i=i+1;
		if(i==1) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(LEN);
		scanf("%s %d",&p1->str,&p1->a);
	}
	p2->next=p1;
	p2=(struct student *)malloc(LEN);
	p2=p1;
	p2->next=NULL;

	return(head);
}
void main()
{
	int n,i,j;
	struct student *head,*p1,*p2,*p3,*p4,*p5,*p6;
	scanf("%d",&n);
	head=creat(n);

	char c[10];
	int t;


  for(i=0;i<n;i++)
  {
	  p1=head;
	  p2=p1->next;
     
	for(j=0;j<n-1-i;j++)
	{
		 if(p2->a>59 && p2->a>p1->a)

         
			 {
				strcpy(c,p2->str);
				strcpy(p2->str,p1->str);
				strcpy(p1->str,c);
				t=p1->a;
				p1->a=p2->a;
				p2->a=t;
				 }
			 
			 
			 p1=p1->next;
			 p2=p2->next;
		 
	 }

  }
  p5=head;

  for(i=0;i<n;i++)
  {
	 
	  { printf("%s\n",p5->str);}
	  p5=p5->next;
  }
} 