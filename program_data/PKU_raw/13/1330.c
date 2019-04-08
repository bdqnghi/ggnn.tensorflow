int main()
{
    int n,i=0,j=0,s=0,num=0,k=0;
	int a[20006];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
				{
					a[k]=a[k+1];
				}
				n--;
				j--;
				s++;
			}
		}
	}

	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		if(i!=n-1)
			{
				printf(" ");
			}
	}
    return 0;
}

