int read(int a[200],int b[100])
{int m,n,i;
scanf("%d %d",&m,&n);
a[0]=m;b[0]=n;
for(i=1;i<=m;i++)
scanf(" %d",&a[i]);
for(i=1;i<=n;i++)
scanf(" %d",&b[i]);
return 0;
}
int seq(int a[200])
{int i,j,t,m=a[0];
for(j=1;j<=m-1;j++)
for(i=1;i<=m-j;i++)
if(a[i]>a[i+1])
{t=a[i]; a[i]=a[i+1]; a[i+1]=t;}
return 0;
}
int toge(int a[200],int b[100])
{int i; int m=a[0]; int n=b[0];
a[0]=a[0]+b[0];
for(i=m+1;i<=m+n;i++)
a[i]=b[i-m];
return 0;}
int see(int a[200])
{int i;
printf("%d",a[1]);
for(i=2;i<=a[0];i++)
printf(" %d",a[i]);
return 0;}
int main()
{int a[200],b[100];
	read(a,b);
	seq(a);seq(b);
	toge(a,b);
    see(a);
return 0;
}