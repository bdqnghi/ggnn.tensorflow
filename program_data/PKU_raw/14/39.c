struct student
{
	long num;
	int math;
	int chinese;
	struct student *next;
};

long stu_num;
struct student *max1,*max2,*max3;

struct student *creat(void)
{
	struct student *head,*p1,*p2;
	long n;
	p1=p2=(struct student *)malloc(LEN);
	scanf("%ld%d%d",&p1->num,&p1->math,&p1->chinese);
	head=NULL;
	n=0;
	while(n<stu_num)
	{
		n++;
		if(n==1)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(LEN);
		scanf("%ld%d%d",&p1->num,&p1->math,&p1->chinese);
	}
	p2->next=NULL;
	return(head);
}

void Max1(struct student *head,long stu_num)
{
	struct student *q1;
	q1=head;
	max1=head;
	for(;q1!=NULL;)
		if((max1->math+max1->chinese)<(q1->math+q1->chinese))
		{
			max1=q1;
			q1=q1->next;
		}
		else
            q1=q1->next;
	printf("%ld %d\n",max1->num,max1->math+max1->chinese);
}


void Max2(struct student *head,long stu_num)
{
	struct student *q2;
	q2=head;
	if(head!=max1)
		max2=head;
	else
		max2=q2->next;
	for(;q2!=NULL;)
		if((max2->math+max2->chinese)<(q2->math+q2->chinese)&&q2!=max1)
		{
			max2=q2;
			q2=q2->next;
		}
		else
            q2=q2->next;
	printf("%ld %d\n",max2->num,max2->math+max2->chinese);
}


void Max3(struct student *head,long stu_num)
{
	struct student *q3;
	q3=head;
	for(;q3!=NULL;)
		if(q3==max1||q3==max2)
			q3=q3->next;
		else
		{
			max3=q3;
			break;
		}
	q3=head;
	for(;q3!=NULL;)
		if((max3->math+max3->chinese)<(q3->math+q3->chinese)&&q3!=max1&&q3!=max2)
		{
			max3=q3;
			q3=q3->next;
		}
		else
            q3=q3->next;
	printf("%ld %d\n",max3->num,max3->math+max3->chinese);
}


void main()
{
	struct student *head;	
	scanf("%ld",&stu_num);
	head=creat();
	Max1(head,stu_num);
	Max2(head,stu_num);
	Max3(head,stu_num);
}


