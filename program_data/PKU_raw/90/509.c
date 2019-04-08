int f1(int m,int n)
{
	int f(int m,int n);
	if(m==n) return 1;
	else if(m<n) return 0;
	else if(m==2&&n==1) return 1;
    else if(n==2) return m/2;
	else
		return f(m-n,n);
}
int f2(int m,int n)
{
	int f(int m,int n);
    if(n==1) return 0;
	else if(n==2) return 1;
	else 
		return f(m,n-1);
}
int f(int m,int n)
{
	if(m==1) return 1;
	else if(m==2) return 2;
	else if(n==1) return 1;
	else if(n==2) return (m/2+1);
	else 
		return (f1(m,n)+f2(m,n));
}
void main()
{
	int i,t,M[20],N[20];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	scanf("%d %d",&M[i],&N[i]);
	for(i=0;i<t;i++)
		printf("%d\n",f(M[i],N[i]));
}


