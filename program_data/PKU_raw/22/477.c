int b[10000]={0};

int main()
{
	int n=1,i,j,k,a[10000];
    scanf("%d",&a[1]);
	do
	{
		++n;
	}while(scanf(",%d",&a[n]));
	for(i=1;i<n;++i)
	{
		b[a[i]]++;
	}
	k=0;
	for(b[j=9999];j>=1;--j)
	{
		if(b[j]>0) k=k+1;
		if(k==2) 
		{
			printf("%d\n",j);
			break;
		}
	}
	if(j==0) printf("No\n");
	return(0);
}