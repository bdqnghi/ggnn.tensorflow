

struct results
{
	int num;
	struct results *next;
};

void print0(struct results *head)
{
   struct results *p;
   p=head;
	
   while(p!=NULL)
   {
		   printf("%d",p->num);
		   cout<<endl;
		   p=p->next;
	   }
}

int main()
{
	int n,m,i,g,s=0;

	struct results  *head,*p1,*p2;
	
	head=NULL;
	p1=(struct results*)malloc(LEN);
	p2=(struct results*)malloc(LEN);
	g=0;

	while(scanf("%d%d",&n,&m)!=EOF&&(m&&n)) 
	{ 
		if (m<=0||n>300)
		{
			printf("?????0<m,n<=300:");
			continue;
		}
		s=0;
		if(n==1) s=0;
		else {for(i=2;i<=n;i++)
		s=(s+m)%i;}
 		p1->num=s+1;
  	g=g+1;
 		if(g==1) head=p1;
 		else p2->next=p1;
 		p2=p1;
 		p1=(struct results*)malloc(LEN);
	}
	p2->next=NULL;

	print0(head);
	return 0;
}