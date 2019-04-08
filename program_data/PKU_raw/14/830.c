int sum[99999];
int m[99999];
int main(int argc, char* argv[])
{ 
	int n,i,b,c,a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		sum[i]=b+c;
		m[i]=a;
	}
	int j,k,t,x,l=0;
	for(j=0;j<n;j++)
	{
		for(k=n-1;k>j;k--)
		{
			if(sum[k]>sum[k-1])
			{
				t=sum[k-1];
			    sum[k-1]=sum[k];
				sum[k]=t;
				x=m[k-1];
				m[k-1]=m[k];
				m[k]=x;
			}
		}l++;
		if(l==3)
			break;
	}
	for(i=0;i<l;i++)
	{
	printf("%d %d\n",m[i],sum[i]);
	}	
	return 0;
}
