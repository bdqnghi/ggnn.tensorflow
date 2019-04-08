int main()
{
	int left[100],right[100],n,i,j,t,k,l,r[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&left[i],&right[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(left[j]>left[j+1])
			{
				t=left[j];
				left[j]=left[j+1];
				left[j+1]=t;
			}
			if(right[j]>right[j+1])
			{
				t=right[j];
				right[j]=right[j+1];
				right[j+1]=t;
			}
		}
	}
	
	k=0;
	for(i=0;i<n-1;i++)
	{
		if(right[i]<left[i+1])
		{
			printf("no\n");
			break;
		}
		else
		{
			k++;
		}
	}
	l=0;
	for(i=n;i>=0;i--)
	{
		r[l++]=right[i];
	}

	if(k==n-1)
		printf("%d %d\n",left[0],r[1]);
	return 0;
}


