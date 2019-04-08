int co(int m[],int n[],int j,int e)
{
	int a,b,c;b=m[j];c=0;
	for(a=j+1;a<e;a++)
	{
		if(b>=m[a]&&c<=n[a])
			c=n[a];
	}
	return(c);
}
void main()
{
	int a,b,c,d,e,f,g,m[26],n[26],i,j;
	scanf("%d",&a);
	for(i=0;i<a;i++)
		scanf("%d",&m[i]);
	n[a-1]=1;
	for(j=(a-2);j>=0;j--)
	{
		n[j]=co(m,n,j,a)+1;	}
	f=0;
	for(g=0;g<a;g++)
	{
		if(n[g]>=f)
			f=n[g];
	}
	printf("%d",f);
}

