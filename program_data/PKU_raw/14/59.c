struct student
{char num[10];
 int chinese;
 int math;
 int sum;
 struct student *next;
};
int n;


struct student *creat(int n)
{ 
	struct student *head,*p1,*p2;
    p1=p2=(struct student *)malloc(LEN);
    scanf("%s %d %d",p1->num,&p1->chinese,&p1->math);
    p1->sum=p1->chinese+p1->math;
    head=NULL;
	int t=n;
while(n>1)
{
	if(n==t) head=p1;
	else p2->next=p1;
	p2=p1;
	p1=(struct student *)malloc(LEN);
	scanf("%s %d %d",p1->num,&p1->chinese,&p1->math);
    p1->sum=p1->chinese+p1->math;
	n--;
}
    p2->next=NULL;
    return(head);
}



void main()
{
	int n,i;struct student *first,*second,*third;
	int fir_index,sec_index,thr_index;
	scanf("%d",&n);struct student *head,*p1;struct student stu;
    head=creat(n);
	first=head;second=head;third=head;
    for(p1=head;p1->next!=NULL;p1=p1->next)
	{
			if(p1->sum>first->sum)
			{
			    third=second;second=first;first=p1;
			}
			else if(p1->sum>second->sum)
			{
                third=second;second=p1;
			}
            else if(p1->sum>third->sum)
			{
                third=p1;
			}
	}			
	printf("%s %d\n",first->num,first->sum);
    printf("%s %d\n",second->num,second->sum);
    printf("%s %d\n",third->num,third->sum);
}

