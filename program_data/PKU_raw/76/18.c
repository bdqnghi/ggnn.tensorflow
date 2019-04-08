int main()
{
	int n;
	scanf("%d",&n);
	int *left=(int*)malloc(sizeof(int)*n);
	int *right=(int*)malloc(sizeof(int)*n);
	int i,j;
	int tmp,sign=0,min,max;	
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&left[i],&right[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(left[j]<left[j-1])
			{
				tmp=left[j];
				left[j]=left[j-1];
				left[j-1]=tmp;
				tmp=right[j];
				right[j]=right[j-1];
				right[j-1]=tmp;
			}
		}
	}
	min=left[0];
	max=right[0];
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(left[j]<=max)
			{
				if(right[j]>max)
				{
					max=right[j];
				}
				sign++;
			}
		}
		if(sign==0)
			break;
		else if(i==n-1&&sign==n-1)
			sign=1;
		else
			sign=0;
	}
	if(i==n&&sign==1)
		printf("%d %d\n",min,max);
	else
		printf("no\n");
	free(left);
	free(right);
	return 0;
}