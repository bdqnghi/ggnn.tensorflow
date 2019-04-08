int apple(int a,int b)
{
	int k=0;
	if(a==0||b==1)
		k=1;
    else if(a<b)
	{
		k=apple(a,a);
	}
	else
	{
		k=apple(a,b-1)+apple(a-b,b);
	}
	return(k);
}
int main()
{
	int t,m[2000],n[2000],i;
	scanf("%d",&t);
    for(i=0;i<t;i++)
	{
		scanf("%d%d",&m[i],&n[i]);
	}
	for(i=0;i<t;i++)
	{
		printf("%d\n",apple(m[i],n[i]));
	}
	return 0;
}