int max=0,n=0;
int a[30],line=0,f[30]={0},b[30]={0};
void main()
{
	int k,i,n=0;
	
	void missile(int i,int k);
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
		if(line<a[i])
			line=a[i];
	}
	missile(0,k);
	printf("%d",max);
}
void missile(int i,int k)
{
	int j;
	for(j=0;j<2;j++)
	{
		if(j==0&&i!=k-1)
		{
			missile(i+1,k);
		}
		else
		{
		    if(a[i]<=line||i==k-1)
			{
				if(a[i]<=line)
				{
				b[i]=line;
				line=a[i];
		        n++;
				f[i]=1;
				}
		        if(i==k-1)
				{
			        if(max<n)
				        max=n;
					printf("\n");
				}
		        else
		            missile(i+1,k);
				if(f[i]==1)
				{
				n--;
				line=b[i];
				f[i]=0;
				}
			}
		}
	}
}