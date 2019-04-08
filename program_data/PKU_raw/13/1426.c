
void main(void)
{
	int n;
	scanf("%d",&n);

	int i,k=0,a[90],b[20000];

	for(i=0;i<=89;i++)
		a[i]=i+10;

	for(i=0;i<=n-1;i++)
		scanf("%d",&b[i]);

	for(i=0;i<=n-1;i++)
	{
		int j;
		for(j=0;j<=89;j++)
		{
			if(b[i]==a[j])
			{
				if(k==0)
					printf("%d",a[j]);
				else
					printf(" %d",a[j]);
				a[j]=0;
				k++;
				break;
			}
		}
	}

	printf("\n");
}