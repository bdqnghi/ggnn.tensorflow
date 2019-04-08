int main()
{
	void qz(int s[],int m);
	void px(int s[],int m);
	void hb(int s[],int t[],int m,int n);
	void xs(int s[],int m);
	int n,m;
	int a[200],b[200];
	scanf("%d%d",&m,&n);
	qz(a,m);
	qz(b,n);
    px(a,m);
	px(b,n);
	hb(a,b,m,n);
	xs(a,m+n);
	return 0;
}
void qz(int s[],int m)
{
	int i;
	for(i=0;i<m;i++)
	{
		scanf("%d",&s[i]);
	}
}
void px(int s[],int m)
{
	int i,j,t;
	for(i=0;i<=m-1;i++)
	{
        for(j=i+1;j<=m-1;j++)
		{
			if(s[j]<s[i])
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}
}
void hb(int s[],int t[],int m,int n)
{
	int i;
	for(i=m;i<=m+n-1;i++)
	{
		s[i]=t[i-m];
	}
}
void xs(int s[],int m)
{
	int i;
     printf("%d",s[0]);
	 for(i=1;i<m;i++)
	 {
		 printf(" %d",s[i]);
	 }
}
