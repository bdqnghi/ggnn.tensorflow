void main()
{
	int n,a[100]={0},maxlen[100]={0},i,j,temp,temp2=1,temp3;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		temp2=1;
		if(i==0)maxlen[i]=1;
		else
		{
			temp3=0;
			for(j=i-1;j>=0;j--)
			{   
				if( a[j]>=a[i])
				{
					if(maxlen[j]>maxlen[temp3])
					temp3=j;
					temp2=0;
					
				}
			}
			maxlen[i]=maxlen[temp3]+1;
			if(temp2==1)maxlen[i]=1;
		}
	}
	temp=0;
	for(i=0;i<n;i++)
		if(maxlen[i]>maxlen[temp])
		temp=i;
	printf("%d",maxlen[temp]);
}
		