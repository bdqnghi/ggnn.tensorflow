void main()
{
	struct book
	{
		int x;
		char z[10];
		struct book *next;
	}*p1,*p2,*p,*head,*t;
	int i,n,max=0,j,k,l,y[400],q;char u;scanf("%d",&n);
p1=p2=head=(struct book *)malloc(sizeof(struct book));
for(i=0;i<n;i++)
{
	scanf("%d %s",&p1->x,p1->z);y[i]=strlen(p1->z);
	p1=(struct book *)malloc(sizeof(struct book));p2->next=p1;p2=p1;
}
p=head;
for(i=0;i<n-1;i++)
{	
for(j=0;j<y[i];j++)
{
	q=1;t=p->next;
	for(k=i+1;k<n;k++)
	{
		for(l=0;l<y[k];l++)
			if(p->z[j]==t->z[l])q++;
			t=t->next;
	}
	if(q>max){max=q;u=p->z[j];}
}
p=p->next;
}
printf("%c\n%d\n",u,max);
p=head;
for(i=0;i<n;i++)
{
	for(j=0;j<y[i];j++)
		if(u==p->z[j]){printf("%d\n",p->x);break;}
		p=p->next;
}
}
