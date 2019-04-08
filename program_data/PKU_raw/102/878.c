int geshu(int c);
int main()
{
	char a[number], ch1,ch2, max1,max2, tmp[100003];
    int k, m, n, sz[number], sz1[number], i, j, b;
	double high[100], high2[100], mc;
	scanf("%d", &n);
	k=0;
	m=0;
	for(i=0;i<n;i++)
	{
		scanf("%s %lf", a, &high[m]);
		if(a[0]=='f')
		{
			high2[k]=high[m];
			k++;
			m--;
		}
		m++;
	}

	for(j=0;j<m-1;j++)
	{
		for(b=0;b<m-j-1;b++)
		{
			if(high[b]>high[b+1])
			{
				mc=high[b];
				high[b]=high[b+1];
				high[b+1]=mc;
			}
		}
	}

	for(j=0;j<k-1;j++)
	{
		for(b=0;b<k-j-1;b++)
		{
			if(high2[b]<high2[b+1])
			{
				mc=high2[b];
				high2[b]=high2[b+1];
				high2[b+1]=mc;
			}
		}
	}


	for(i=0;i<m;i++)
		printf("%.2lf ", high[i]);
	for(i=0;i<k;i++)
	{
		if(i==k-1)
			printf("%.2lf", high2[i]);
		else
			printf("%.2lf ", high2[i]);
	}
	return 0;
}
