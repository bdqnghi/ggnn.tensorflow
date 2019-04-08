struct a
{
	char No[20];
	int y;
	int s;
	struct a* next;
};
int n;
struct a* creat(void)
{
	struct a *p1,*p2,*head;
	int i;
	scanf("%d\n",&n);
	p1=p2=(struct a* )malloc(LEN);
	head=NULL;
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d",p1->No,&p1->y,&p1->s);
		if(i==0)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct a* )malloc(LEN);
	}
	p2->next=NULL;
	return(head);
}

int main()
{
	struct a *head,*p1,*p2,*p;
	int i,j,k,m1,m2;
	char r[10];
	head=creat();
	for(p1=head,j=0;p1!=NULL;p1=p1->next)
	{
		k=p1->y+p1->s;
		if(k>j){p=p1;j=k;m1=p1->y;m2=p1->s;strcpy(r,p1->No);}
	}
	printf("%s %d\n",r,j);
	for(p1=head;p1!=NULL;)
	{
		p2=p1;p1=p1->next;
		if(p1==p){p2->next=p1->next;break;}
		else if(p2==p){head=p1->next;break;}
	}
	for(p1=head,j=0;p1!=NULL;p1=p1->next)
	{
		k=p1->y+p1->s;
		if(k>j){p=p1;j=k;m1=p1->y;m2=p1->s;strcpy(r,p1->No);}
	}
	printf("%s %d\n",r,j);
	for(p1=head;p1!=NULL;)
	{
		p2=p1;p1=p1->next;
		if(p1==p){p2->next=p1->next;break;}
		else if(p2==p){head=p1->next;break;}
	}
	for(p1=head,j=0;p1!=NULL;p1=p1->next)
	{
		k=p1->y+p1->s;
		if(k>j){p=p1;j=k;m1=p1->y;m2=p1->s;strcpy(r,p1->No);}
	}
	printf("%s %d",r,j);
}