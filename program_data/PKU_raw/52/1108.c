void main()
{
	int m,n;
	int a[100];int *p;
	void move(int *,int,int);
	int i;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	p=a;
	move(p,n,m);
	for(i=0;i<n-1;i++,p++)
		printf("%d ",*p);printf("%d\n",*p);
}

void move(int *p,int n,int m)
{
	int i,t;
	t=*(p+n-1);
	for(i=n-1;i>0;i--)
		*(p+i)=*(p+i-1);
	*p=t;    
	m--;
	if(m>0)
		move(p,n,m);
	
}