struct student
{
	char num[1000];
	char name[1000];
	char sex;
	int age;
	char score[1000];
	char add[1000];
	struct student*next;
	struct student*pre;
};
int n;
struct student*creat()
{
	struct student*head,*end;
	struct student*p1,*p2;
	n=0;
	p1=p2=(struct student*)malloc(LEN);
	head=NULL;
   scanf("%s",p1->num);
	while(p1->num[0]!='e')
	{  	scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->add);
		n=n+1;
		if(n==1){head=p1;p1->pre=NULL;}
		else {p2->next=p1;p1->pre=p2;}
		p2=p1;
		p1=(struct student*)malloc(LEN);
	   scanf("%s",p1->num);
	}
	p2->next=NULL;
	end=p2;
	return(end);
}

void print(struct student*end)
{
	struct student*p;
	p=end;
	do
	{
		printf("%s %s %c %d %s %s",p->num,p->name,p->sex,p->age,p->score,p->add);
		printf("\n");
		p=p->pre;
	}while(p!=NULL);
}
int main()
{
	struct student *end;
	end=creat();
	print(end);
  return 0;
}
