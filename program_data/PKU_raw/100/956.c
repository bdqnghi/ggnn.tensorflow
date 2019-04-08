int main()
{
	char str[100],a[27]="abcdefghijklmnopqrstuvwxyz";
	gets(str);
	int i,j,k=0,sum=0;
	int len,num[100]={0};
	len=strlen(str);
	for(i=1;i<=26;i++)
	{
		for(j=1;j<=len;j++)
		{
			if(a[i-1]==str[j-1])
				num[i-1]++;
		}
	}
	for(i=1;i<=26;i++)
	{
		sum+=num[i-1];
		
	}	

	if(sum==0) printf("No");
	else
	{
		for(i=1;i<=26;i++)
		{
			sum+=num[i-1];
			if(num[i-1]>0)
			printf("%c=%d\n",a[i-1],num[i-1]);
		}	
	}
	return 0;
}

