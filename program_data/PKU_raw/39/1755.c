struct student
{
	char name[20];
	int num1;
	int num2;
	char a;
	char b;
	int c;
	int sum;
	struct student *next;
};
struct student *creat(void)
{
	
	struct student *head;
	struct student *p1,*p2;
	int n;
	scanf("%d",&n);
	p1=p2=(struct student*)malloc(LEN);
	int i=0;
	scanf("%s %d %d %c %c %d",p1->name,&p1->num1,&p1->num2,&p1->a,&p1->b,&p1->c);
	i=i+1;
	head=NULL;
	while(i<n)
	{
		if(i==1) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student*)malloc(LEN);
		scanf("%s %d %d %c %c %d",p1->name,&p1->num1,&p1->num2,&p1->a,&p1->b,&p1->c);
		i=i+1;
	}
	p2->next=p1;
	p1->next=NULL;

	return(head);
}



void print(struct student *head)
{
	struct student *p,*max;
	int d=0;
	p=head;
	
	if(head!=NULL)
       while(p!=NULL)
	    {
	    	(*p).sum=0;
		  if((*p).num1>80&&(*p).c!=0)
		  	(*p).sum+=8000;
		  else (*p).sum+=0;
		  if((*p).num1>85&&(*p).num2>80)
		    (*p).sum+=4000;
		  else (*p).sum+=0;
		  if((*p).num1>90)
		    (*p).sum+=2000;
		  else (*p).sum+=0;
		  if((*p).num1>85&&(*p).b=='Y')
		    (*p).sum+=1000;
		  else(*p).sum+=0;
		  if((*p).num2>80&&(*p).a=='Y')
		    (*p).sum+=850;
		  else (*p).sum+=0; 
		  
		
		  d+=(*p).sum;
		  p=p->next;
	    }
	  p=head;
	max=head;
	max->sum=0;
	if(head!=NULL)
	
		while(p!=NULL)
		{
			if(p->sum>max->sum)
		    max=p;
		  
		    p=p->next;
		}
		printf("%s\n%d\n",max->name,max->sum);
	
     printf("%d",d);
}
void main()
{
    struct student *head;
	head=creat();
	print(head);
}
		  	