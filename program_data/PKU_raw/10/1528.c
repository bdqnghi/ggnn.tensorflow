int n,i;
int h[26];
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}

int f(int t,int l)
{
	if(t==1)
	{
		if(h[1]>=l)
			return 1;
		else
			return 0;
	}

    else if(h[t]<l)
		return f(t-1,l);
	else
		return max(f(t-1,l),f(t-1,h[t])+1);

}

	void main()
{
		scanf("%d",&n);
for(i=1;i<=n;i++)
scanf("%d",&h[i]);

	printf("%d",f(n,0));
}
