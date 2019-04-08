int main()
{
	int distribution(int,int);
	int t,i;
	int m[21]={0},n[21]={0};
	scanf("%d\n",&t);
	for(i=1;i<=t;i++)
		scanf("%d %d\n",&m[i],&n[i]);
	for(i=1;i<=t;i++)
		printf("%d\n",distribution(m[i],n[i]));
	return 0;
}
		int distribution(int m,int n)
		{
			if(m==1)
				return(1);
			else if(n==1)
				return(1);
			else if(m<n)
				return(distribution(m,n-1));
				else return(distribution(m-n,n)+distribution(m,n-1));
		}
