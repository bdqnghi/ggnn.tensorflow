int main()
{
	int n,i,j=0,k;
	int a[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]!=k)
		{
 			a[j]=a[i];
            if(j==0)
			{
				printf("%d",a[j]);
			}
			if(j!=0)
			{
				printf(" %d",a[j]);
			}
			j++;

		}

	}	

}
