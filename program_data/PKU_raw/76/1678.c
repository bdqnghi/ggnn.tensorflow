int main()
{
int i,j,min,max,n,y=1;
int a[10000],b[10000],c[10000];
scanf("%d",&n);
for(i=0;i<10000;i++)
{c[i]=0;}
min=10000;
max=0;
for(i=0;i<n;i++)
{scanf("%d %d",&a[i],&b[i]);
	for(j=(a[i]+1);j<=(b[i]);j++)
	{c[j]=1;}
	if(min>(a[i]))
	{min=a[i];}
	if(max<(b[i]))
	{max=b[i];}
}
c[min]=1;
for(i=min;i<=max;i++)
	{if(c[i]==0)
	{printf("no");
	y=0;	
	break;}
}
if(y==1)
{printf("%d %d",min,max);}
return 0;
}