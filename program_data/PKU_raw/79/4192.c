void main()
{
	int ha(int n,int m);
	int a[100],b[100],i,n;
	for(i=0;i<100;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		if(a[i]==0&&b[i]==0)
		{n=i;break;}
	}
    for(i=0;i<n;i++)
		printf("%d\n",ha(a[i],b[i]));
}
int ha(int n,int m)
{
	int a[300],i,t=0,k=0,l;
	for(i=0;i<n;i++)
		a[i]=i+1;
	if(n==1) k=1;
	else
	{
		i=0;l=1;
	do
	{
			if(a[i]!=0&&l==m)	
		{
			a[i]=0;
			t++;
			l=1;
		}
		else if(a[i]!=0) l++;
		if(i<n-1) i++;
		else i=0;

	}while(t<n-1);
	for(i=0;i<n;i++)
		k=k+a[i];
	}
	return(k);
}
	

