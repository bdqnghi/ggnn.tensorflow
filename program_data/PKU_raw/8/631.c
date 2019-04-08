int m=0,n=0,a[100],b[100];
int *pointer1=&m,*pointer2=&n;
void input(int *r,int *s,int *x,int *y)
{
	int i;
	scanf("%d %d",r,s);
	for(i=0;i<*r;i++)
	{
		scanf("%d",x+i);
	}
	for(i=0;i<*s;i++)
	{
		scanf("%d",y+i);
	}
}
void sort(int *t,int *p)
{
	int i,j,r,s;
	for(i=0;i<(*t)-1;i++)
	{
        r=i;
		for(j=i+1;j<*t;j++)
			if(*(p+j)<*(p+r)) r=j;
		if(r!=i)
		{
			s=*(p+i);
			*(p+i)=*(p+r);
			*(p+r)=s;
		}
	}
}
void output(int *x,int *y,int *p1,int *p2)
{
	int i;
	for(i=0;i<*x;i++)
		printf("%d ",*(p1+i));
	for(i=0;i<*y;i++)
		printf("%d%c",*(p2+i),(i<(*y)-1)?' ':'\n');
}
void main()
{
	input(pointer1,pointer2,a,b);
	sort(pointer1,a);
	sort(pointer2,b);
	output(pointer1,pointer2,a,b);
}