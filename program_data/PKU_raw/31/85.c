//#define NULL 0
struct student
{
	char num[20];
	char name[20];
	char sex;
	int age;
	char score[10];
	char adress[20];
//	struct student *next;
	struct student *before;
};

struct student *creat(void)
{
	struct student *head,*p1,*p2;
	int n;
	n=0;
	p1=p2=(struct student *)malloc(LEN);
//	scanf("%s %s %c %d %d %s",p1->num,p1->name,&p1->sex,&p1->age,&p1->score,p1->adress);
    scanf("%s",p1->num);
	head=NULL;
    while(strcmp(p1->num,"end")!=0)
	{
        scanf(" %s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->adress);
		n++;
		if(n==1)
		{
//			head=p1;
			p1->before=NULL;
		}
		else
		{
			p1->before=p2;
			head=p1;
		}
		p2=p1;
		p1=(struct student *)malloc(LEN);
        scanf("%s",p1->num);
/*		if(strcmp(p1->num,"end")==0)
			break;
		else
			scanf(" %s %c %d %d %s",p1->name,&p1->sex,&p1->age,&p1->score,p1->adress);*/
	}
//	head=p2;
	return(head);
}


void main()
{
	struct student *head,*q1;
	head=creat();
	q1=head;
	if(head!=NULL)
	{	
		while(q1!=NULL)
		{
	    printf("%s %s %c %d %s %s\n",q1->num,q1->name,q1->sex,q1->age,q1->score,q1->adress);
	    q1=q1->before;
		}
   //     printf("%s %s %c %d %d %s\n",q1->num,q1->name,q1->sex,q1->age,q1->score,q1->adress);
	}
	
}