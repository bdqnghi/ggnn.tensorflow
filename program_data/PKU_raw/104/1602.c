int tree(int x,int *a)
{
	static int i=1;

	if(x!=1)
	{
		x=x/2;
		*a=x;
		a++;
		tree(x,a);
		i++;
	}
	else
		*a=1;
	return i;
}


int por(int *e,int *r)
{
	static int q;
	if(*e!=*r)
	{printf("%d\n",q);}
	else
	{
		q=*e;
		e--;
		r--;
//		printf("%d %d\n",*e,*r);
		por(e,r);
	}
	return q;
}

void main()
{
	int x,y,a[12],b[12],a1,b1;
	int *a2;
	int *b2;
	int *a3;
	int *b3;
	scanf("%d%d",&x,&y);
	a[0]=x;
	b[0]=y;
	a2=&a[1];
	b2=&b[1];
	a1=tree(x,a2)+1;
	b1=tree(y,b2)-a1+3;
//	printf("%d %d ",a1,b1);
	a3=&a[a1-1];
	b3=&b[b1-1];
	por(a3,b3);
//	printf("%d",*a3);

}
