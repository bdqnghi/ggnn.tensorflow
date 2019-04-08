int fenpei(int n,int k);
int main(int argc, char* argv[])
{
	int n=0,k=0;
	scanf("%d%d",&n,&k);
	printf("%d",fenpei(n,k));
	return 0;
}
int fenpei(int n,int k)
{
	int i=0,m=n-1,j=0,t=1;
	while(1)
	{
		j=0;
		m=t*(n-1);
		for(i=0;i<n;i++)
		{
		if(m%(n-1)!=0) break;
		m=m/(n-1)*n+k;
		j++;
		if(j==n) break;
		}
		if(j==n) break;
		else t++;
	}
	return m;
}