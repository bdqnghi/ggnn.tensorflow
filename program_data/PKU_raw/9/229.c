struct ill
{
    char id[100];
	int age;
	struct ill *next;
};
void main()
{
	struct ill *creat(int x);
	struct ill *p,*head;
	char *w[1000];
	char *temp1;
	int n,i,j=0,k,temp;
	int *q;
	scanf("%d",&n);
    p=creat(n);
	head=p;
	q=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		if((*p).age>=60) {*(q+j)=(*p).age;*(w+j)=(*p).id;j++;}
		p=(*p).next;
	}
	k=j;
loop:for(i=0;i<j-1;i++)
	{
		if(*(q+i)<*(q+i+1))
		{
			temp=*(q+i);*(q+i)=*(q+i+1);*(q+i+1)=temp;
			temp1=*(w+i);*(w+i)=*(w+i+1);*(w+i+1)=temp1;
		}
	}
	for(i=0;i<j-1;i++)
	{
		if(*(q+i)<*(q+i+1)) goto loop;
	}
	for(i=0;i<j;i++)
	{printf("%s\n",*(w+i));}
	p=head;
	for(i=0;i<n;i++)
	{
		if((*p).age>=60) goto lop;
		else
		{printf("%s\n",(*p).id);}
lop:p=(*p).next;
	}



}
struct ill *creat(int x)
{
	struct ill *head,*p1,*p2;
	int i;
	p1=(struct ill *)malloc(sizeof(struct ill));
	scanf("%s %d",(*p1).id,&(*p1).age);
	p2=p1;
	head=p1;
	for(i=0;i<x;i++)
	{
	p1=(struct ill *)malloc(sizeof(struct ill));
	scanf("%s %d",(*p1).id,&(*p1).age);
	(*p2).next=p1;
	p2=p1;
	}
    (*p2).next=NULL;
	return(head);
}