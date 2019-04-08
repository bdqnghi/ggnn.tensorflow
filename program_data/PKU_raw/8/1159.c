int m,n;
int main()
{
	int p[100]={0},q[100]={0},c[200]={0};
void re(int a[],int b[]);
void or(int a[],int b[]);
void cb(int a[],int b[],int d[]);
void pr(int d[]);
re(p,q);
or(p,q);
cb(p,q,c);
pr(c);
return 0;}
void re(int a[],int b[])
{
int i;
scanf("%d %d",&m,&n);
for(i=0;i<m;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
scanf("%d",&b[i]);
}
void or(int a[],int b[])
{
int i,j,t;
for(i=0;i<m-1;i++)
for(j=i+1;j<m;j++)
if(a[i]>a[j]) {t=a[i];a[i]=a[j];a[j]=t;}
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
if(b[i]>b[j]) {t=b[i];b[i]=b[j];b[j]=t;}
}
void cb(int a[],int b[],int d[])
{
int i;
for(i=0;i<m;i++) d[i]=a[i];
for(i=m;i<m+n;i++) d[i]=b[i-m];
}
void pr(int d[])
{
int i;
printf("%d",d[0]);
for(i=1;i<m+n;i++)
printf(" %d",d[i]);
}