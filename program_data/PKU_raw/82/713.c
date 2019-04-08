int main(){
	int n,i,l,e;
	int k=0;
	int a=0;
	scanf("%d",&n);
	int sz[100][2];
	int sf[100];
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&sz[i][0],&sz[i][1]);
	}
	for(i=0;i<n;i++)
	{
		if(i<n-1)
		{
			if((sz[i][0]>=90)&&(sz[i][0]<=140)&&(sz[i][1]>=60)&&(sz[i][1]<=90))
			{
				a++;
			}
			else
			{
				sf[k]=a;
				k++;
				a=0;
			}
		}
		if(i==n-1)
		{
			if((sz[i][0]>=90)&&(sz[i][0]<=140)&&(sz[i][1]>=60)&&(sz[i][1]<=90))
			{
				sf[k]=a+1;
			}
			else
			{
				sf[k]=a;
			}
		}
	
	}
	for(l=0;l<k;l++)
	{
		if(sf[l]>sf[l+1])
		{
			e=sf[l];
			sf[l]=sf[l+1];
			sf[l+1]=e;
		}
	}
	printf("%d",sf[k]);
	return 0;
}