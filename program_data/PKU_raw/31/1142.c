struct student
{
	char info[100];
	struct student *next;
};
int n;
struct student *creat(void)
{
  struct student *head;
  struct student *p1,*p2;
  n=0;
  p1=p2=(struct student *)malloc(LEN);
  gets (p1->info);
  head=NULL;
  while (strcmp(p1->info,"end")!=0)
  {
  	n=n+1;
  	if (n==1) head=p1;
  	else p2->next=p1;
  	p2=p1;
  	p1=(struct student*)malloc(LEN);
  	gets (p1->info);
  }	
  p2->next=NULL;
  return (head);
}
void pri(struct student *head,int i)
{
	int j;
	struct student *p1,*p2;
	p1=head;
	for (j=1;j<i;j++)
	{
	   p2=p1;
	   p1=p2->next;
	}
	puts (p1->info);
}

void main()
{
	int i;
	struct student *head,stu;
	head=creat ();
	for (i=n;i>0;i--)
	pri(head,i);
}