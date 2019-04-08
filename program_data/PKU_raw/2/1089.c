struct student
{
	long num;
	char str[27];
	struct student *next;
};
int n;
struct student *creat(int m)
{
	struct student *head;
	struct student *p1,*p2;
	n=0;
	p1=p2=(struct student*)malloc(LEN);
	scanf("%ld %s",&p1->num,p1->str);
	head=0;
	while(p1->num!=0)
	{
		n=n+1;
		if(n==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(LEN);
		scanf("%d %s",&p1->num,p1->str);
	}
	p2->next=0;
	return(head);
}
void main()
{
	struct student *head,*p,stu;
	int m,i,t,max,y=1,a[100]={0},sum[27]={0};
	char x=1,c;
	scanf("%d",&m);
	head=creat(m);
	p=head;
	for(;p!=0;p=p->next)
	{
		for(t=0;t<strlen(p->str);t++)
		{
			c=p->str[t];
			sum[c-64]++;
		}
	}
	max=sum[1];
	for(i=1;i<=26;i++)
		if(sum[i]>max){max=sum[i];x=i;}
		for(p=head;p!=0;p=p->next)
		{
			for(t=0;t<=strlen(p->str);t++)
				if(p->str[t]==x+64)a[y]=p->num;
				y++;
		}
		printf("%c\n%d\n",x+64,max);
		for(y=1;y<=99;y++)
			if(a[y]!=0)printf("%d\n",a[y]);
}

