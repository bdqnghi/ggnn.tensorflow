int max(double n[],int m)
{
	double max_num=n[0];
	int maxn=0;
	for(int i=1;i<m;i++)
	{
		if(n[i]>max_num)
		{
			max_num=n[i];
			maxn=i;
		}
	}
	return maxn;
}
int min(double n[],int m)
{
	double max_num=n[0];
	int maxn=0;
	for(int i=1;i<m;i++)
	{
		if(n[i]<max_num)
		{
			max_num=n[i];
			maxn=i;
		}
	}
	return maxn;
}
int main()
{
	int n,i,j=0,k=0,maxn;
	char s[10];
    double mt[40],ft[40],t;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>s>>t;
		if(strcmp(s,"male")==0)
		{
			mt[j]=t;
			j++;
		}
		else if(strcmp(s,"female")==0)
		{
			ft[k]=t;
			k++;
		}
	}
	for(i=0;i<j;i++)
	{
		maxn=max(mt,j-i);
		double temp=mt[j-i-1];
		mt[j-i-1]=mt[maxn];
		mt[maxn]=temp;	
	}
	for(i=0;i<k;i++)
	{
		maxn=min(ft,k-i);
		double temp=ft[k-i-1];
		ft[k-i-1]=ft[maxn];
		ft[maxn]=temp;	
	}

	for(i=0;i<j;i++)
	{

		printf("%0.2f ",mt[i]);
	}
	for(i=0;i<k-1;i++)
	{
		printf("%0.2f ",ft[i]);
	}
	printf("%0.2f",ft[k-1]);
	return 0;

}