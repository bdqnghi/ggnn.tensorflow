int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k=0,a[100000],s=0;
	for(i=3;i<=n;i++)
	{
		for(j=2;j<=(int)sqrt(i);j++)
		{
			if(i%j==0) break;
		}
		if(j>=(int)sqrt(i)+1) 
		{
			a[k]=i;
			k=k+1;
		}
	}
	if(k==1) printf("empty");
	else
	{
		for(i=0;i<k-1;i++)
		{
			for(j=i+1;j<k;j++)
			{
				if(a[j]-a[i]==2)
				{
					printf("%d %d\n",a[i],a[j]);
					break;
				}
			}
		}
	}
return 0;
}