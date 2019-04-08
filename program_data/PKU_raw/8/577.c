void main()
{
	int N1[100],N2[100],N[200],n1,n2;
	void scan(int N1[],int N2[],int *p1,int *p2);
	void order(int N1[],int n1,int N2[],int n2);
	void join(int N1[],int N2[],int N[],int n1,int n2);
	void print(int N[],int n);
	scan(N1,N2,&n1,&n2);
	order(N1,n1,N2,n2);
	join(N1,N2,N,n1,n2);
	print(N,n1+n2);
}
void scan(int N1[],int N2[],int *p1,int *p2)
{
    int i;
	scanf("%d%d",p1,p2);
	for(i=0;i<*p1;i++) scanf("%d",&N1[i]);
	for(i=0;i<*p2;i++) scanf("%d",&N2[i]);
}
void order(int N1[],int n1,int N2[],int n2)
{
	int i,j,imin,Nmin,Nm;
	for(i=0;i<n1;i++)
	{
		imin=i;
	    Nmin=N1[i];
		for(j=i;j<n1;j++)
		{
			if(N1[j]<Nmin)
			{
				imin=j;
				Nmin=N1[j];
			}
		}
		Nm=N1[i];
		N1[i]=N1[imin];
		N1[imin]=Nm;
	}
	for(i=0;i<n2;i++)
	{
		imin=i;
	    Nmin=N2[i];
		for(j=i;j<n2;j++)
		{
			if(N2[j]<Nmin)
			{
				imin=j;
				Nmin=N2[j];
			}
		}
		Nm=N2[i];
		N2[i]=N2[imin];
		N2[imin]=Nm;
	}
}
void join(int N1[],int N2[],int N[],int n1,int n2)
{
	int i;
	for(i=0;i<n1;i++) N[i]=N1[i];
	for(i=n1;i<n1+n2;i++) N[i]=N2[i-n1];
}
void print(int N[],int n)
{
	int i;
	printf("%d",N[0]);
	for(i=1;i<n;i++) printf(" %d",N[i]);
}