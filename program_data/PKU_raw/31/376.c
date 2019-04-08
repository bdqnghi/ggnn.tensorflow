struct Student
{
char number[100];
char name[100];
char sex;
int age;
char score[20];
char address[100];
struct Student *next;
struct Student *front;
}; 
int n;
void main()
{
	struct Student*p1,*p2;
	n=0;
	p1=p2=(struct Student*)malloc(LEN);
	scanf("%s %s %c%d%s%s",&p1->number,&p1->name,&p1->sex,&p1->age,&p1->score,&p1->address);
	p1->front=NULL;
	while(p1->number[0]!='e'||p1->number[1]!='n'||p1->number[2]!='d')
	{
			n=n+1;
		    p2->next=p1;
			p2=p1;
			p1=(struct Student*)malloc(LEN);
			scanf("%s %s %c%d%s%s",&p1->number,&p1->name,&p1->sex,&p1->age,&p1->score,&p1->address);
			p1->front=p2;
	}
	p2->next=NULL;
	while(p2!=NULL)
	{
		printf("%s %s %c %d %s %s\n",p2->number,p2->name,p2->sex,p2->age,p2->score,p2->address);
		p2=p2->front;
	}
}

