int a[30]={0},b[30][1000];
struct stu
{
	int num;
	char name[30];
	
	struct stu *next;
};
struct stu *creat(int n)
{
	struct stu *p1,*p2,*head;
	int i=0;
	p1=p2=(struct stu *)malloc(sizeof(struct stu));
	scanf("%d %s",&p1->num,p1->name);
	head=0;
	for(i=0;i<n;i++)
	{
		if(i==0)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		if(i<n-1)
		{
			p1=(struct stu *)malloc(sizeof(struct stu));
			scanf("%d %s",&p1->num,p1->name);
		}
	}
	p2->next=0;
	return head;
}
int check(struct stu *head,int n)
{
	int i,j,s,d=0,f=0;
	char *t;
	struct stu *p;
	p=head;
	for(i=0;i<n;i++,p=p->next)
	{
		s=strlen(p->name);
		t=p->name;
		for(j=0;j<s;j++)
		{
			d=t[j]-64;
			a[d]++;
			b[d][a[d]-1]=p->num;
		}
	}
	for(i=1;i<=26;i++)
	{
		for(j=1,f=0;j<=26;j++)
		{
		    if(a[i]<a[j])
			{
				f=1;
				break;
			}
		}
		if(f==0)
			break;
	}
	return i;
}
void main ()
{
	struct stu *head;
	int i,j,n;
	scanf("%d",&n);
	head=creat(n);
	i=check(head,n);
	printf("%c\n%d\n",i+64,a[i]);
	for(j=0;j<a[i];j++)
		printf("%d\n",b[i][j]);

}