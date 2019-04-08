void move(int a[],int n,int m);
int main ()
{
	int n,m;
	int a[100];
	scanf("%d%d",&n,&m);
	getchar();

	int *p;
	for(p=a;p<(a+n);p++)
		scanf("%d",p);
	move (a,n,m);
	for(p=a;p<(a+n-1);p++)
		printf("%d ",*p);
	printf("%d",*p);
	return 0;
}
void move(int a[],int n,int m)
{
	int *p,temp;
	temp=*(a+n-1);
	for(p=a+n-1;p>a;p--)
		*p=*(p-1);
	*a=temp;
	m--;
	if (m>0)
		move(a,n,m);
}