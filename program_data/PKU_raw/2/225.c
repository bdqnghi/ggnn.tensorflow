struct st
{
	int a;
	char s[26];
	struct st *n;
}
;
struct st *creat(int m)
{
	int i;
	struct st *p1,*p2,*head;
	for(i=0;i<m;i++)
	{
		p1=(struct st *)malloc(len);
		if(i==0)head=p1;
		else p2->n=p1;
		scanf("%d %s",&p1->a,p1->s);
		p2=p1;
	}
	p1->n=NULL;
	return(head);
}
void main()
{
	int m;
	struct st *creat(int m);
	scanf("%d",&m);
	struct st *p,*q;
	p=creat(m);
	q=p;
	int i,j,k;
	int a[26]={0};
	for(i=0;i<m;i++)
	{
		for(j=0;j<(k=strlen(p->s));j++)a[p->s[j]-65]++;
		p=p->n;
	}
	p=q;
	int max=a[0];
	for(i=1;i<26;i++)
	{
		if(a[i]>max)max=a[i];
	}
	char c;
	for(i=0;i<26;i++)
	{
		if(a[i]==max)
		{
			c=i+65;
			printf("%c\n%d\n",c,a[i]);
			break;
		}
	}
	char cc;
	for(i=0;i<m;i++)
	{
		for(j=0;;j++)
		{
			cc=q->s[j];
			if(cc=='\0')break;
			if(c==cc)printf("%d\n",q->a);
		}
		q=q->n;
	}
}