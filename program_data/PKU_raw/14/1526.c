struct student{
	int id;
	int chi;
	int math;
	int total;
	struct student *next;
};
int student_num;

struct student *creat()
{
	struct student *p1,*p2,*head;
	int n=0;
	scanf("%d",&student_num);
	p1=p2=(struct student*)malloc(sizeof (struct student));
	while(n<student_num)
	{
		if (n==0) head=p1;
		if (n==student_num-1) p1->next=NULL;
		scanf("%d %d %d",&p1->id,&p1->chi,&p1->math);
		p1->total=p1->chi+p1->math;
		p2=p1;
		p1=(struct student*)malloc(sizeof (struct student));
		p2->next=p1;
		n++;
	}
	return head;
}

void main()
{
	struct student *head,*p;
	int i,n=0,first,second,third,firstid,secondid,thirdid;
	head=creat();
	first=0;
	second=0;
	third=0;
	p=head;
	for(i=1;i<=student_num;i++){
		if (p->total>first){
			third=second;second=first;first=p->total;
			thirdid=secondid;secondid=firstid;firstid=p->id;
		}
		else if (p->total<=first&&p->total>second){
			third=second;second=p->total;
			thirdid=secondid;secondid=p->id;
		}
		else if (p->total<=second&&p->total>third){
			third=p->total;
			thirdid=p->id;
		}
		p=p->next;
	}
			
	printf("%d %d\n%d %d\n%d %d\n",firstid,first,secondid,second,thirdid,third);
	
}