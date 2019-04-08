struct person
{
	int number;
	int nextp;
}link[300];
int king(int n,int m)
{
	int i,t,h;
	for(i=1;i<=n;i++)
	{
		if(i==n)
			link[i].nextp=1;
		else
			link[i].nextp=i+1;
		link[i].number=i;
	}
	t=0;
	h=n;
	while(t<n-1)
	{i=0;
	while(i!=m)
	{
		h=link[h].nextp;
		if(link[h].number)
			i++;
	}
	link[h].number=0;
	t++;
	}
	for(i=1;i<=n;i++)
	{
		if(link[i].number)
			return(link[i].number);
	}
}
void main()
{
	int king(int a,int b);
	int a[1000],k,i,b[1000]={0};
	for(i=0;;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		if(a[i]==0) break;
	}
	k=i;
	for(i=0;i<k;i++)
	{
		printf("%d\n",king(a[i],b[i]));
	}
}