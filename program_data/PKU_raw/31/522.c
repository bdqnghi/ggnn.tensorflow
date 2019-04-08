struct sa
{
	char a[500];
	struct sa *next;
};
int n;
struct sa *kao(void)
{
	struct sa *head;
	struct sa *p1,*p2;
	n=0;
    head=NULL;
	p1=p2=(struct sa *)malloc(len);
	gets(p1->a);
	head=p1;
    for(;;)
	{
       n++;
	   if(n==1)
		   p1->next=NULL;
	   else
	   {
		   p2=p1;
           p1=(struct sa *)malloc(len);
		   p1->next=p2;
		   gets(p1->a);
	   }
	   if(strcmp(p1->a,"end")==0)
		   break;
	}
	head=p2;
	return (head);
}
int main()
{
	struct sa *p;
	p=kao();
	for(;p!=NULL;)
	{
		printf("%s\n",p->a);
		p=p->next;
	}
	return 0;
}
