

int main()
{
	
	int k,j,i,a[26]={0},length[26]={0},max=0;
	scanf("%d",&k);
	for(i=0;i<k;i++)
		scanf("%d",&a[i]);
	length[0]=1;
	
	for(i=1;i<k;i++)
	{
		length[i]=1;
		for(j=0;j<i;j++)
		{
			
			if(a[i]<=a[j] && length[i]<length[j]+1)
				length[i]=length[j]+1;
		}
	}

	
	for(i=0;i<k;i++)
	{
		

		if(length[i]>max)
			max=length[i];
	}

	printf("%d",max);

	return 0;
}

		


