void main()
{
	void read(int x[],int y[],int a,int b);
	void change(int x[],int y[],int a,int b);
	void combine(int x[],int y[],int a,int b);
	int x[10],y[10],a,b;
	scanf("%d %d",&a,&b);
	read(x,y,a,b);
	change(x,y,a,b);
	combine(x,y,a,b);
}
void read(int x[],int y[],int a,int b)
{
	int i;
	char c;
	for(i=1;i<=a;i++)
		scanf("%d%c",&x[i],&c);
	for(i=1;i<=b;i++)
		scanf("%d%c",&y[i],&c);
}
void change(int x[],int y[],int a,int b)
{
	int i,j,t;
	for(i=1;i<=a;i++)
		for(j=1;j<a+1-i;j++)
		{
			if(x[j]>x[j+1])
			{
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		}
	for(i=1;i<=b;i++)
		for(j=1;j<b+1-i;j++)
		{
			if(y[j]>y[j+1])
			{
				t=y[j];
				y[j]=y[j+1];
				y[j+1]=t;
			}
		}
}
void combine(int x[],int y[],int a,int b)
{
	int i;
	printf("%d",x[1]);
	for(i=2;i<=a;i++)
		printf(" %d",x[i]);
	for(i=1;i<=b;i++)
		printf(" %d",y[i]);
}
