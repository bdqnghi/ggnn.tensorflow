struct moncky
{
	int seq;
	struct moncky *next;
};
struct monckycircle
{
	int allnumber;
	struct moncky *curp;
};
struct monckycircle *creat(int);
void cry_123(struct monckycircle *,int);

int main()
{
	int n_all,n_unlucky;
	struct monckycircle *circlename;
	scanf("%d%d",&n_all,&n_unlucky);
	while(n_all)
	{
		if(n_unlucky==1)
			printf("%d\n",n_all);
		else
		{
			circlename=creat(n_all);	
			while(circlename->allnumber!=0)
				cry_123(circlename,n_unlucky);
			printf("%d\n",circlename->curp->seq);
			
		}
		scanf("%d%d",&n_all,&n_unlucky);
	}
	return 0;
}
struct monckycircle *creat(int allnum)
{
	int i=1;
	struct monckycircle *p;
	struct moncky *head,*now;
	p=(struct monckycircle *)malloc(sizeof(struct monckycircle));
	now=head=(struct moncky *)malloc(sizeof(struct moncky));
	p->allnumber=allnum;
	p->curp=head;
	while(i<allnum)
	{
		now->seq=i;
		now->next=(struct moncky *)malloc(sizeof(struct moncky));
		now=now->next;
		i++;
	}
	now->seq=i;
	now->next=head;
	return p;
}
void cry_123(struct monckycircle *circlename,int unlucky)
{
	int i=1;
	struct moncky *p,*aux;
	p=circlename->curp;
	for(i=1;i!=unlucky;i++)
		p=(i==1?p:p->next);
	aux=p->next->next;
	
	p->next=aux;
	circlename->allnumber--;
	circlename->curp=p->next;
}




