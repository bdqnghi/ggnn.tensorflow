

const int N=30;

int a[N];
int len[N];

int main()
{
	int k;
	int i,j;
	int max;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
	}
	len[0]=1;
	for(i=1;i<k;i++)
	{
		max=1;
		for(j=0;j<i;j++)
		{
			if(a[j]>a[i] && max<len[j])
			{
				max=len[j];
			}
		}
		len[i]=max+1;
	}
	max=-1;
	for(i=0;i<k;i++)
	{
		if(max<len[i])
		{
			max=len[i];
		}
	}
	printf("%d\n",max);
	return 0;
}