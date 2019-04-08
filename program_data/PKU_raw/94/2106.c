int main()
{
	int N,i,j=0,k,dot=0,min=29999,l;
	int a[500],b[500];
	scanf("%d",&N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=0;i<N;i++)
	{
		if(a[i]%2==0)
			continue;
		else
		{
			b[j]=a[i];
			j++;
		}
	}
	for(k=0;k<j;k++)
	{
		for(i=0;i<j;i++)
		{
			if(b[i]<min)
			{
				min=b[i];
			}
			else
				continue;
		}
		if(dot!=0)
			printf(",");
		printf("%d",min);
		dot++;
		for(l=0;l<j;l++)
		{
			if(b[l]==min)
			{
				b[l]=29999;
				break;
			}
		}
		min=29999;
	}
	printf("\n");
	return 0;
}
