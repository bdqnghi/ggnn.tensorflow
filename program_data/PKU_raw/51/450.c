int main()
{
	int n,i,j,k,len,sum[500]={0},p,max=0;
	char temp[5],a[500];
	scanf("%d\n",&n);
	gets(a);
	len=strlen(a);
	for(i=0;i<len-n+1;i++)
	{
		for(j=0;j<n;j++)
			temp[j]=a[i+j];
		for(j=i;j<len-n+1;j++)
		{
			p=0;
			for(k=0;k<n;k++)
				if(temp[k]==a[j+k])
					p=1;
				else
				{
					p=0;
					break;
				}
			if(p)
				sum[i]++;
		}			
	}
	for(i=0;i<len-n+1;i++)
		if(sum[i]>max)
			max=sum[i];
	if(max==1)
		printf("NO");
	else
	{
		printf("%d\n",max);
		for(i=0;i<len-n+1;i++)
			if(sum[i]==max)
			{
				for(j=0;j<n;j++)
					printf("%c",a[i+j]);
				printf("\n");
			}
	}
	return 0;
}
