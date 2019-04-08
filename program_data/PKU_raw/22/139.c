void main()
{
	int b[200]={0},i, j=0, k=0, m;
	char a[1000];
	for(i=0; a[i-1]!='\n'; i++)
	{
		a[i]=getchar();
		if(a[i]!=',' && a[i]>=48 && a[i]<=57)
		{
			b[k]=b[k]*10+a[i]-48;
		}
		if(a[i]==',')
		{
			k++;
		}
	}
	k++;
	for (i=1; i<=k-1; i++)
	{
		if(b[i]!=b[i-1])
		{
			break;
		}
		if(i>k-2)
		{
			printf("No\n");
		}
	}
	if (k==1) printf("No\n");
	else{
	for (i=0; i<k; i++)
	{
		for(j=i+1; j<k; j++)
		{
			if(b[i]<b[j])
			{
				m=b[i];
				b[i]=b[j];
				b[j]=m;
			}
		}
	}
	for (i=1; i<k; i++)
	{
		if(b[i]!=b[i-1])
		{
			break;
		}
	}
	if(b[i]!=0)
	{
	printf("%d\n", b[i]);
	}
	}

}
 
 