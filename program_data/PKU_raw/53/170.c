void main()
{
int a[301],b[302];
int i,k,n,m,tof;
m=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
for(i=0;i<=n;i++)
{tof=1;
	for(k=0;k<i;k++)
	{if(a[i]==a[k]) tof=0;}
	if(tof) {m=m+1;b[m]=a[i];}
}
for(i=2;i<=m;i++)
{printf("%d",b[i]);
if(i!=m) printf(",");}
printf("\n");
}
