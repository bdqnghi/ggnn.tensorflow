struct linknode *CreateLinkList();
void DisplayLinkList(struct linknode *linklist1);
void qiansan(struct linknode *linklist2);
struct linknode
{
	int id;
	int chinese;
	int math;
	int total;
	int mark;
	struct linknode *next;
};
int main()
{
	qiansan(CreateLinkList());

}
struct linknode *CreateLinkList()
{
	long n,i;
	struct linknode *head,*p;
	scanf("%ld",&n);
	head=(struct linknode *)malloc(sizeof(struct linknode));
	p=head;
	if (p==NULL)
	{
		printf("fail");
		exit(-1);
	}
	for(i=1;i<=n;i++)
	{
		scanf("%d %d %d",&p->id,&p->chinese,&p->math);
		p->total=p->chinese+p->math;
		p->mark=0;
		if (i==n)
			p->next=NULL;
		else
		{
			p->next=(struct linknode *)malloc(sizeof(struct linknode));
			p=p->next;
		}
	}
	return head;
}
void  qiansan(struct linknode *linklist2)
{
   struct linknode *head,*p,*max;

   head=linklist2;
   p=head;
   max=(struct linknode *)malloc(sizeof(struct linknode));
   int j;
   for (j=1;j<=3;j++)
   {
	   p=head;
	   max->total=0;
	   while (p!=NULL)
	   {
		   if (p->total>max->total&&p->mark==0)
		   {
               max=p;
		   }
		   p=p->next;
	   }
	   max->mark=1;
	   printf("%d %d\n",max->id,max->total);
	}
}