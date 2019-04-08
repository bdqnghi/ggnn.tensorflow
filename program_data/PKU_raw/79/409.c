void main()
{
int a[301],b[301];
int n[300],m[300],c=0;
int i,j,k,t;
for(i=1;i<=300;i++)
{
	scanf("%d %d",&n[i],&m[i]);
	if(n[i]==0&&m[i]==0){
		break;
	}
	c=c+1;
}
for(k=1;k<=c;k++)
{
	for(i=1;i<=n[k];i++)
	{
		a[i]=i;
	}
	while(n[k]>1)
	{
		t=m[k]%n[k];
		for(j=1;j<=t;j++)
		{
			b[j]=a[j];
		}
		for(j=t+1;j<=n[k];j++)
		{
			a[j-t]=a[j];
		}
        for(j=1;j<=t;j++)
		{
			a[n[k]-t+j]=b[j];
		}
		n[k]--;
	}
printf("%d\n",a[1]);
}
}
