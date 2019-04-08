void main()
{
	char str1[101],str2[101];
	int  k,i,n,j,a=102,b=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",str1);
		scanf("%s",str2);
		k=strlen(str1)-strlen(str2);
		for(j=strlen(str1)-1;j>=k;j--)
		{
			if(b) str1[j]--;
			if(str1[j]>=str2[j-k])
			{
				str1[j]=str1[j]-str2[j-k]+48;
				b=0;
			}
			else
			{
				str1[j]=str1[j]+10-str2[j-k]+48;
				b=1;
			}
		}

		for(j=k-1;j>=0;j--)
		{
			if(b) str1[j]--;
			if(str1[j]<'0')
			{
				str1[j]=str1[j]+10;
				b=1;
			}
			else b=0;
		}

		for(j=0;j<strlen(str1);j++)
		{
			if(str1[j]!='0')
			{
				a=j;
				break;
			}
		}
		for(j=a;j<strlen(str1);j++)
				printf("%c",str1[j]);
		printf("\n");
	}
}