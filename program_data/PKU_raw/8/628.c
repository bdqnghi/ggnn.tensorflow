
int n,m,a[1000],b[100];

void scan(int *p1,int l1,int *p2,int l2)
{
	int i;
	scanf("%d%d",&l1,&l2);
	for(i=0;i<l1;i++)
		scanf("%d",&p1[i]);
	for(i=0;i<l2;i++)
		scanf("%d",&p2[i]);
}

void paixu(int *p,int l)
{
	int t,i,j;
	for(i=1;i<l;i++)
		for(j=0;j<l-i;j++)
			if(p[j]>p[j+1])
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
}

void hebing(int *p1,int l1,int *p2,int l2)
{
	int i;
	for(i=l1;i<l1+l2;i++)
		p1[i]=p2[i-l1];
}

void print(int *p,int l)
{
	int i;
	for(i=0;i<l;i++)
		printf("%d%c",p[i],(i==l-1)?'\n':' ');
}

void main()
{
	int i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
	paixu(a,n);
	paixu(b,m);
	hebing(a,n,b,m);
	print(a,m+n);
}



