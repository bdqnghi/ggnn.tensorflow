void main()
{
	void f2(int a[100],int b[100],int x,int y);
void f(int a[100],int x);
	int i,x,y,a[100],b[100];
	scanf("%d %d",&x,&y);
	for(i=0;i<x;i++)
		scanf("%d",&a[i]);
	for(i=0;i<y;i++)
		scanf("%d",&b[i]);
	f(a,x);f(b,y);
	f2(a,b,x,y);
	for(i=0;i<x+y;i++)
	{
		if(i!=0) printf(" ");
		printf("%d",a[i]);
	}
}
void f(int a[100],int x)
{int i,j,t;
for(i=0;i<x-1;i++)
for(j=0;j<x-1-i;j++)
if(a[j]>a[j+1])
{t=a[j];a[j]=a[j+1];a[j+1]=t;}
}
void f2(int a[100],int b[100],int x,int y)
{int i;
for(i=0;i<y;i++)
a[i+x]=b[i];
}