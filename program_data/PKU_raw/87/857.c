  int main()
{
    int i,a[50],b[50],c[50],d[50],e[50],f[50],m=-1,n[50];
    for(i=0;i<50;i++)
    n[i]=0;
	for(i=0;i>=0;i++)
	{
	scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	m++;
	if(a[i]==0&&b[i]==0&&c[i]==0&&e[i]==0&&f[i]==0)break;
	}
	for(i=0;i<m;i++)
	{
	d[i]=d[i]+12;
	if(f[i]<c[i]){f[i]=f[i]+60;e[i]--;n[i]=n[i]+f[i]-c[i];}
	else n[i]=n[i]+f[i]-c[i];
	if(e[i]<b[i]){e[i]=e[i]+60;d[i]--;n[i]=n[i]+(e[i]-b[i])*60;}
	else n[i]=n[i]+(e[i]-b[i])*60;
	n[i]=n[i]+(d[i]-a[i])*3600;
	}
	for(i=0;i<m;i++)
	printf("%d\n",n[i]);
    return 0;
} 
