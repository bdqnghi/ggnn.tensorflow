
int aa(int high[],int n,int k,int lh,int point)
{
	int remax=0,a=0,i;
	if(point==k-1)
	{
		if(lh>=high[k-1]) return 1;
		else return 0;
	}
	else
	{
		for (i=point;i<k;i++)
			if (high[i]<=lh)
			{
				a=aa(high,n+1,k,high[i],i+1)+1;
				if(a>remax) remax=a;
			}
		return remax;
	}
}

void main()
{
	int i,high[25],k;
	scanf("%d",&k);
	for(i=0;i<k;i++) scanf("%d",&high[i]);
	printf("%d",aa(high,0,k,32767,0));
}
