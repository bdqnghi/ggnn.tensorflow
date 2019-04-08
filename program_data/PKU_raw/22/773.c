int main()
{
	int a[300]={0},b[300]={0},i,j,n,k=1;
	char c;
	for(i=0;;i++)
	{
		scanf("%d%c",&a[i],&c);
		if(c!=',') break;
	}
	n=i+1;
	b[0]=a[0];
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]==b[j]) break;
			if(j==i-1)
			{
				b[k]=a[i];k++;
			}
		}
	}
	if(k==1) printf("No");
	else 
	{
		for(i=0;i<k-1;i++)
		{
			for(j=0;j<k-i-1;j++)
			{
				if(b[j]<b[j+1])
				{
					b[j]=b[j]+b[j+1];b[j+1]=b[j]-b[j+1];b[j]=b[j]-b[j+1];
				}
			}
		}
	printf("%d",b[1]);
	}
	return 0;
}