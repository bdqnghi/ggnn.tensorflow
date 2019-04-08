
struct student 
{
	char num[200];
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
		p2=(struct student*)malloc(sizeof(struct student));
		if(i==0)
		{head=p2;p3=head;}
		scanf("%s %d",p2->num,&p2->sum);        
			p2->next=NULL;
		if(p2->sum>=60){
           if(i==1){
			if(head->sum>=p2->sum){
			  head->next=p2;
			  p2->next=NULL;p3=p2;
			}
			else{p1=head;
			  p2->next=head;
			  head=p2;
			}
		}
	   if(i>1){
		for(p1=head;p1->next!=NULL;p1=p1->next){
			if(p1->sum>=p2->sum&&(p1->next->sum)<p2->sum){
				   p2->next=p1->next;
				   p1->next=p2;
				   break;
				}
			}			
		if(p2->next==NULL){
			if(p2->sum>head->sum){
			   p2->next=head;
			     head=p2;
			}
			if(p2->sum<p1->sum){
		            p2->next=NULL;p3=p2;
			    p1->next=p2;
		        }
			}
	   }
		}
		else{
			if(i!=0){
		 p2->next=NULL;
		 p3->next=p2;p3=p2;}
		}
	}
	p1=head;
    for (i=0;(i<n&&p1!=NULL);i++)
	{
		printf("%s\n",p1->num);
		p1=p1->next;
	}
}