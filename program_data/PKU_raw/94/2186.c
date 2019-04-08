int main()
{
	int n,i,j,k,l,m;
	int a[500],b[500];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n");
	for(i=0,j=0,k=0;i<n;i++)
	{if(a[i]%2==1)
	{b[j]=a[i];
	j++;
	k++;
	}
	}
	for(j=0;j<k;j++)
	{for(l=j+1;l<k;l++)
	{
	if(b[l]<b[j])
	{m=b[l];b[l]=b[j];b[j]=m;}
	}
	if(j==0)
		printf("%d",b[j]);
	else
	printf(",%d",b[j]);
	}
	printf("\n");
	return 0;
}