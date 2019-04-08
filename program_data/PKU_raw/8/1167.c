int a[100],b[100];
int n,m;
main()
{
void input(void);
void order1(void);
void order2(void);
void output(void);
input();
order1();
order2();
output();
}

void input(void)
{
int i;
scanf("%d %d\n",&n,&m);
for (i=1;i<=n;i++)
scanf("%d",&a[i]);
for (i=1;i<=m;i++)
scanf("%d",&b[i]);
}

void order1(void)
{
int i,j,t;
for (i=1;i<=n-1;i++)
 for (j=i+1;j<=n;j++)
  if (a[i]>=a[j])  {t=a[i];a[i]=a[j];a[j]=t;}
}

void order2(void)
{
int i,j,t;
for (i=1;i<=m-1;i++)
 for (j=i+1;j<=m;j++)
  if (b[i]>=b[j]) { t=b[i];b[i]=b[j];b[j]=t;}
}

void output(void)
{
int i;
for (i=1;i<=n;i++)
printf("%d ",a[i]);
for (i=1;i<m;i++)
printf("%d ",b[i]);
printf("%d",b[m]);
}