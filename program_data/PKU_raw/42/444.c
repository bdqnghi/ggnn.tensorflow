
void main()
{
	int n;
	scanf("%d",&n);
	int num[n],de;
	int i,j,k,t;
	for(i=0;i<n;i++)
	scanf("%d",&num[i]);
	scanf("%d",&de);
	for(i=0,j=0;i<n-j;i++)
	{
		if(num[i]==de)
		{
			for(k=i;k<n-j;k++)
			num[k]=num[k+1];
			j++;
			i--;
		}
	}
	for(i=0;i<n-j-1;i++)
	printf("%d ",num[i]);
	printf("%d\n",num[n-j-1]);
}