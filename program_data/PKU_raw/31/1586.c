
struct stu{
	char num[20];
	char name[20];
	char gender;
	int age;
	float score;
	char address[20];
	struct stu *next;
};

struct stu *creat()
{
	struct stu *head,*p1,*p2;
	head=p1=p2=(struct stu *)malloc(LEN);
	head->next=NULL;
	scanf("%s",p1->num);
	SCAN;
	for(;;)
	{   
	    p1=(struct stu *)malloc(LEN);
		scanf("%s",p1->num);
	    if(p1->num[0]!='e')
		{SCAN;
	     p1->next=p2;
  	     p2=p1;}
        else
        {break;}
	}
	return(p2);
}

int main()
{
	struct stu *p,*t;
	t=creat();
	for(p=t;p!=NULL;p=p->next)
	printf("%s %s %c %d %g %s\n",p->num,p->name,p->gender,p->age,p->score,p->address);
} 