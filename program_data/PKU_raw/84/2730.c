void main()
{
int n,a[100],i,zd,cd,t;
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
if(i==0)
zd=a[i];
if(a[i]>zd)
{
	zd=a[i];
     t=i;
}
}
  for(i=0;i<=n-1;i++)
  { if(i==0&&t!=0)
     cd=a[0];
    if(i==0&&t==0)
	{ cd=a[1];
	 continue;
	}
    if(i==t)
		continue;
	if(a[i]>cd)
		cd=a[i];
  }
printf("%d\n%d\n",zd,cd);

}