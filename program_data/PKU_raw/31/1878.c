struct student
{char information[100];
 struct student *next;
};
int n;
struct student *creat(void)
{struct student *head;
 struct student *p1,*p2;
 n=0;
 p1=p2=(struct student *)malloc(LEN);
 gets(p1->information);
 while(strcmp(p1->information,"end")!=0)
 {n=n+1;
  if(n==1) p1->next=NULL;
  else {p1->next=p2;p2=p1;}
  p1=(struct student *)malloc(LEN);
  gets(p1->information);
 }
 head=p2;
 return(head);
}
void print(struct student *p)
{
	do
	{
		printf("%s\n",p->information);
		p=p->next;
	}while(p!=NULL);
}
void main()
{
	struct student *head;
	head=creat();
	print(head);
}