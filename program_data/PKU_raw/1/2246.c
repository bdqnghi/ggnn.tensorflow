int check(int n,int i)
{
	for(i=2; i<=n/2;i++)
		if(n%i==0)
            break;
	return (i==n/2&&n!=4)?1:0;
}
int f(int n, int k)
{
	if (check(n,2)==1 || k==n)
		return 1;
	else if(n<k)
		return 0;
	else
	{
		int h=0,i;
		for( i=k;i<=sqrt(n);i++)
			if(n%i==0)
				h+=f(n/i,i);
		return h+1;
	}
}

void main()
{
	int n,h,i;
    scanf("%d",&n);
	for(i=0;i<n;i++)
    {
        scanf("%d",&h);
        printf("%d\n",f(h, 2));
    }
}
