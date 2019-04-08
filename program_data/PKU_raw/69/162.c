int main()
{
	char a1[252],b1[252];
	int a[252],b[252],sum[252];
	
	scanf("%s",a1);scanf("%s",b1);
	int i,j;
	for(i=0;i<252;i++)
	{
		a[i]=0;b[i]=0;sum[i]=0;
	}
	int lena,lenb;
	lena=strlen(a1);lenb=strlen(b1);
	for(i=0;i<lena;i++)
	{
		a[i]=a1[lena-1-i]-'0';
	}
	for(i=0;i<lenb;i++)
	{
		b[i]=b1[lenb-1-i]-'0';
	}
	
	for(i=0;i<252;i++)
	{
		sum[i]=sum[i]+a[i]+b[i];
		if(sum[i]>9)
		{
			sum[i]=sum[i]-10;
			sum[i+1]=sum[i+1]+1;
		}
	}
	for(i=251;i>=0;i--)
	{
		if(sum[i]!=0)
			break;
	}
	if(i<0) printf("0");
	else
	for(j=i;j>=0;j--)
	{
		printf("%d",sum[j]);
	}
	return 0;
}
