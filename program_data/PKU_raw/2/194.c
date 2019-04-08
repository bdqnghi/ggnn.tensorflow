struct book
{
	int num;
	char name[26];
	struct book *next;
};
struct book *creat(int m)
{
	struct book *head,*p1,*p2;
	p1=(struct book *)malloc(sizeof(struct book));
	scanf("%d %s",&p1->num,p1->name);
	int i;
	for(i=1;i<m;i++)
	{
		if(i==1) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct book *)malloc(sizeof(struct book));
		scanf("%d %s",&p1->num,p1->name);
	}
	p2->next=p1;p1->next=NULL;
	return(head);
}
main()
{
	struct book *head,*p;
	int i,j,m,k,l,max=0;
	scanf("%d",&m);
	head=creat(m);
	int *a;
	a=(int *)malloc(26*sizeof(int));
	for(i=0;i<26;i++)
		*(a+i)=0;
	p=head;
	for(i=0;i<m;i++)
	{
		k=strlen(p->name);
		for(j=0;j<k;j++)
			for(l=0;l<26;l++)
				if(*(p->name+j)==l+65)
					(*(a+l))++;
		p=p->next;
	}
	for(i=0;i<26;i++)
		if(max<*(a+i)) max=*(a+i);
	for(i=0;i<26;i++)
		if(max==*(a+i)) {printf("%c\n%d\n",i+65,max);break;}
	p=head;
	for(j=0;j<m;j++)
	{
		k=strlen(p->name);
		for(l=0;l<k;l++)
			if(*(p->name+l)==i+65)
				printf("%d\n",p->num);
		p=p->next;
	}
}