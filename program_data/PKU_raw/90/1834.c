int empty(int m,int n);
int noempty(int m,int n);
int main()
{
	int t,m,n,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&m,&n);

		printf("%d\n",empty(m,n)+noempty(m,n));
	}
	return 0;
}
int empty(int m,int n)
{
	if(n==1)
		return 0;
	else if(m==1)
		return 1;
	else if(m==0&&n!=0)
		return 1;
	else if(m==0)
		return 0;
	else
		return empty(m,n-1)+noempty(m,n-1);
}
int noempty(int m,int n)
{
	if(m<n)
		return 0;
	else if(m==0)
		return 0;
	else if(n==1)
		return 1;
	else if(m==1)
		return 0;
	else
		return empty(m-n,n)+noempty(m-n,n);
}