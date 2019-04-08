struct sa
{
	int a;
	char b[100];
	struct sa *next;
};
int n,m,k[27];
struct sa *kao(void)
{
	struct sa *head;
	struct sa *p1,*p2;
	n=0;
    head=NULL;
	p1=p2=(struct sa *)malloc(len);
	scanf("%d %s",&p1->a,p1->b);
	head=p1;
    for(;;)
	{
       n++;
	   if(n==m+1)
		   break;
	   if(n==1)
		   head=p1;
	   else
	   {
		   p2=p1;
           p1=(struct sa *)malloc(len);
		   scanf("%d %s",&p1->a,p1->b);
		   p2->next=p1;
	   }
	}
	p1->next=NULL;
	return (head);
}
int main()
{
	struct sa *p,*q,*head,*ped;
	int f,i,g,s=1,t,d=0;
	char c;
	scanf("%d",&m);
	head=kao();
	for(p=head;p!=NULL;p=p->next)
	{
        g=strlen(p->b);
		for(i=0;i<g;i++)
		{
			k[p->b[i]-64]++;
		}
	}
	t=k[1];
	for(i=2;i<27;i++)
	{
		if(k[i]>k[s])
		{s=i;t=k[i];}
	}
	printf("%c\n%d\n",s+64,t);
	for(p=head;p!=NULL;)
	{
		g=strlen(p->b);
		for(i=0;i<g;i++)
		{
			if(p->b[i]==s+64)
			{
				d=1;break;
			}
		}
		if(d==1)
			printf("%d\n",p->a);
		d=0;
		p=p->next;
	}
	return 0;
}
