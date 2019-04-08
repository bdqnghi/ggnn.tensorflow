int f(int p)
{
	if(p==1) p=-1;
	if(p%2==0) p=0;
	if(p%2==1) p=1;
	return(p);
}

void main()
{
	int x,y,n,i,a[1000],b[1000],k,j;
	scanf("%d%d",&x,&y);
	a[0]=x;
	b[0]=y;
	for(i=0; ;i++)
	{
		if(f(a[i])==-1) {k=i;break;}
		if(f(a[i])==0) a[i+1]=a[i]/2;
		if(f(a[i])==1) a[i+1]=(a[i]-1)/2;			
	}
	for(i=0; ;i++)
	{
		if(f(b[i])==-1) {j=i;break;}
		if(f(b[i])==0) b[i+1]=b[i]/2;
		if(f(b[i])==1) b[i+1]=(b[i]-1)/2;			
	}
	if(k<j)
		n=k;
	else
		n=j;
	for(i=0;i<=n;i++)
	{
		if(a[k-i]!=b[j-i])
		{
			printf("%d\n",a[k-i+1]);
			break;
		}
		
	}
	if(i==n+1)
		printf("%d\n",a[k-n]);
	
}
