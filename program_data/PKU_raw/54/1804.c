
int main()
{
	int n,k,i,t,f;
	long int ans;
	scanf("%d%d",&n,&k);
	for(ans=1;ans<3000000000;ans++)
	{
		f=0;
		t=ans;
		for(i=1;i<=n;i++)
		{
			if(((t-k)%n==0)&&(t-k>0))
			{
				t=t-k-(t-k)/n;
			}
			else
			{
				f++;
				break;
			}
		}
		if(f!=0)
		    continue;
		else
			break;
	}
	printf("%ld\n",ans);
	return 0;
}
