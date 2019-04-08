int main()
{
	int n,i,LEN;
	int a[500];
	int t[500];
	int j=0;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	
	for(i=0;i<n;i++)
	{
	     if(a[i]%2!=0)
		 {
			 t[j]=a[i];
			 j=j+1;
		 }
	}

	LEN=j;

	int maxIndex, e;
    for(int k=1;k<=LEN;k++)
	{
	    maxIndex = 0;
	    for(int j=0;j<=LEN-k;j++)
		{
			if(t[j]>t[maxIndex])
			{
					maxIndex =j;
			}
		}	
	    if(maxIndex != LEN-k)
		{
		   e = t[maxIndex];
		   t[maxIndex] = t[LEN-k];
		   t[LEN-k]=e;
		}
	}

	for(j=0;j<LEN-1;j++)
	{
		printf("%d,",t[j]);
	}
	printf("%d",t[LEN-1]);








	return 0;
}





