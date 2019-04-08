int m,n,x[100],y[100],z[100];
void main ()
{
	void read();
	void orde(int c[100],int d[100]);
	void resm(int e[100],int f[100]);
	void show(int g[100]);
	read( );
	orde(x,y);
	resm(x,y);
	show(x);
}
void read( )
{   
	int i;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		scanf("%d",&x[i]);
    for(i=0;i<n;i++)
        scanf("%d",&y[i]);
}
void orde(int c[100],int d[100])
{
    int i,j,q;
	for(i=0;i<m-1;i++)
		for(j=0;j<m-i-1;j++)
		{
			if(c[j+1]<c[j])
			{	q=c[j+1];
			    c[j+1]=c[j];
				c[j]=q;
			}
		}
		for(i=0;i<m;i++)
		{
			x[i]=c[i];
		}
		for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
		{
			if(d[j+1]<d[j])
			{	q=d[j+1];
			    d[j+1]=d[j];
				d[j]=q;
			}
		}
		for(i=0;i<n;i++)
		{
			y[i]=d[i];
		}
}
void resm(int e[100],int f[100])
{
	int i;
	for(i=0;i<n;i++)
		e[i+m]=f[i];
	for(i=0;i<100;i++)
		x[i]=e[i];
}
void show(int g[100])
{
	int i;
	for(i=0;i<m+n-1;i++)
		printf("%d ",x[i]);
	printf("%d\n",x[m+n-1]);
}
