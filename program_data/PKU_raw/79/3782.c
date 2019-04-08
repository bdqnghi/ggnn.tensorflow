struct king{int num;struct king *next;};
void p_king(int n,int m)
{
	int i;
	struct king *p1,*p2,*p;
	p1=p=(struct king *)malloc(LEN);
	for(i=0;i<n;i++)
	{
		p1->num=i+1;
		if(i==n-1) p1->next=p;
		else p1->next=(struct king *)malloc(LEN);
		p2=p1,p1=p1->next;
	}
	for(p1=p;n!=1;n--)
	{
		for(i=1;i<(m-1)%n+1;i++)
			p2=p1,p1=p1->next;
		p2->next=p1=p1->next;
	}
	printf("%d\n",p1->num);
}
	
void main()
{
	int i,n[300],m[300];
	scanf("%d%d",&n[0],&m[0]);
	for(i=1;m[i-1]&&n[i-1];i++)
		scanf("%d%d",&n[i],&m[i]);
	for(i=0;m[i]&&n[i];i++)
		p_king(n[i],m[i]);
}