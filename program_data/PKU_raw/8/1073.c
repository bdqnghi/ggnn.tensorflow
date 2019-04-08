int n,m,i,j,t;
int a[100];
int b[100];
int c[200];
void passed1()
{
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<m;i++) scanf("%d",&b[i]);
}
void passed2()
{
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i-j]<a[i-1-j])
			{
				t=a[i-j];
				a[i-j]=a[i-1-j];
				a[i-1-j]=t;
			}
			else break;
		}
	}
	for(i=1;i<m;i++)
	{
		for(j=0;j<i;j++)
		{
			if(b[i-j]<b[i-1-j])
			{
				t=b[i-j];
				b[i-j]=b[i-1-j];
				b[i-1-j]=t;
			}
			else break;
		}
	}
}	
void passed3()
{
	for(i=0;i<n;i++) c[i]=a[i];
	for(i=0;i<m;i++) c[i+n]=b[i];
}
void passed4()
{
	printf("%d",c[0]);
	for(i=1;i<n+m;i++) printf(" %d",c[i]);
}
int main()
{
	passed1();
	passed2();
	passed3();
	passed4();
}