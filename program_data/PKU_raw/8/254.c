int n,m;
int a[100],b[100],c[100];
void shuru()
{
	int i;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);}
	for(i=0;i<m;i++)
	{scanf("%d",&b[i]);}
}
void paixu()
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{for(j=0;j<n-1-i;j++)
	{if(a[j]>a[j+1]) {t=a[j];a[j]=a[j+1];a[j+1]=t;}}
	}
    for(i=0;i<m-1;i++)
	{for(j=0;j<m-1-i;j++)
	{if(b[j]>b[j+1]) {t=b[j];b[j]=b[j+1];b[j+1]=t;}}
	}
}
void zuhe()
{
	int i;
	for(i=0;i<n;i++)
	{c[i]=a[i];}
	for(i=n;i<n+m;i++)
	{c[i]=b[i-n];}
}
void shuchu()
{
	int i;
    for(i=0;i<n+m;i++)
    {if(i!=n+m-1)printf("%d ",c[i]);
	else printf("%d",c[i]);}
}
int main()
{
	shuru();
	paixu();
	zuhe();
	shuchu();
}