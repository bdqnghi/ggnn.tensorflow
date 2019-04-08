int k=0,t;
void main()
{
	void apple(int a[],int b[],int c[]);
	int M[100],N[100],s[100]={0},i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
		scanf("%d%d",&M[i],&N[i]);
	apple(M,N,s);
	printf("%d",s[0]);
	for(i=1;i<t;i++)
		printf("\n%d",s[i]);
}
void apple(int a[],int b[],int c[])
{
	int i;
	int num(int a,int b);
	for(i=0;i<t;i++)
		c[i]=num(a[i],b[i]);
}
int num(int a,int b)
{
	if(a<b)
	{
		b=a;
		k=num(a,b);
	}
	else
		if(b==1||a==0)
			k=1;
		else if(b>1)
			k=num(a,b-1)+num(a-b,b);
	return(k);
}