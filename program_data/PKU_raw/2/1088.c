struct student
{
	int num;
	char str[27];
	struct student *next;
};
int n;
struct student *creat(int m)
{
	struct student *head;
	struct student *p1,*p2;
	
	p1=p2=(struct student*)malloc(LEN);
	scanf("%ld %s",&p1->num,p1->str);
	n=1;
	head=0;
	while(n<m)
	{
		if(n==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(LEN);
		scanf("%d %s",&p1->num,p1->str);
		n=n+1;
	}
	p2->next=p1;
	p1->next=0;
	return(head);
}
void main()
{
	struct student *head,*p,stu;
	int m,i,t,max,y=1,a[100]={0},sum[27]={0};
	char x,c;
	scanf("%d",&m);
	head=creat(m);
	p=head;
	for(;p!=0;p=p->next)
	{
		for(t=0;t<strlen(p->str);t++)
		{
			c=p->str[t];
			sum[c-'A'+1]++;
		}
	}
	max=sum[1];
	x=1;
	for(i=1;i<=26;i++)
		if(sum[i]>max){max=sum[i];x=i;}
		for(p=head;p!=0;p=p->next)
		{
			for(t=0;t<=strlen(p->str);t++)
				if(p->str[t]==x+'A'-1) {a[y]=p->num;y++;t=strlen(p->str)+1;}
				
		}
		printf("%c\n%d\n",x+64,max);
		for(y=1;y<=max;y++)
			printf("%d\n",a[y]);

			
}
