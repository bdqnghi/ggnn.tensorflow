

//#define LEN sizeof(struct student)
struct student
	{
		char num[50];
		struct student * next;
	};
int n;
char end[4]="end";

struct student * creat(void)
{
	struct student * p1,*p2;
	n=0;
	p1=p2=(struct student*)malloc(sizeof(struct student));//
	gets(p1->num);
	while(strcmp(end,p1->num)!=0)//
	{
		n=n+1;
		if(n==1)
			p2->next=NULL;
		else p1->next=p2;
		p2=p1;
		p1=(struct student *)malloc(sizeof(struct student));
		gets(p1->num);

	}

	
	return(p2);
	

}

void print(struct student * p2)
{
	struct student *p;
	p=p2;
		do{
			printf("%s\n",p->num);
			p=p->next;
		}while(p!=NULL);
}

int main()
{
	print(creat());
	return 0;
}