int main()
{
    int n,i,j,k,sum=0,b[1000],max=0,maxi=0;
	char a[1000];
	scanf("%d",&n);
	scanf("%s",a);
	for(i=0;i<1000;i++)
		b[i]=0;
	for(i=0;i<strlen(a);i++)
	{
		for(j=i+1;j<strlen(a);j++)
		{
			if(a[i]==a[j])
			{
				for(k=1;k<n;k++)
				{
					if(a[i+k]==a[j+k])
						sum++;
				}
				if(sum==n-1)
				{
					b[i]++;
				}
			}
			sum=0;
		}
	}
	max=0;
	for(i=0;i<strlen(a);i++)
	{
		if(b[i]>=max)
		{
			max=b[i];
		}
	}
	if(max!=0){
	printf("%d\n",max+1);
	for(i=0;i<strlen(a);i++)
	{
		if(b[i]==max)
		{
			for(j=0;j<n;j++)
			{
		        printf("%c",a[i+j]);
			}
			printf("\n");
		}
	}}
	else
	{
        printf("NO");
    }
	
	return 0;
}
