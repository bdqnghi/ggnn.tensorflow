int n1,n2,a1[50],a2[50];
void main()
{
	void sort(int b[],int n);
	void scn();
	void pr(int c[],int m);
	scn();
	sort(a1,n1);
	sort(a2,n2);
	pr(a1,n1);
	pr(a2,n2);
}
void sort(int b[],int n)
{
	int i,j,t;
	for(j=0;j<n-1;j++)
	for(i=0;i<n-1;i++)
	{
		if(b[i]>b[i+1])
		{
			t=b[i];
			b[i]=b[i+1];
			b[i+1]=t;
		}
	}
}
void scn()
{
	int i;
	scanf("%d %d",&n1,&n2);
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a1[i]);
	}
	
	for(i=0;i<n2;i++)
	{
		scanf("%d",&a2[i]);
	}
}
void pr(int c[],int m)
{
	int i;
	for(i=0;i<m;i++)
	{
		if(i==m-1&&c[i]==a2[m-1])
		printf("%d",c[i]);
		else
			printf("%d ",c[i]);
	}
}