int main()
{
	for(;;)
	{
	char cin[201],cout[201];
	int a[201]={0},i,j,n,sum;
	gets(cin);
	if(feof(stdin))
			break;

	n=strlen(cin);
	for(i=0;i<n;i++)
	{
		cout[i]=' ';
		if(cin[i]=='(')
			a[i]=1;
		else if(cin[i]==')')
			a[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		if(a[i]!=1)
			continue;
		for(j=i;j<n;j++)
		{
			sum=sum+a[j];
			if(sum==0)
				break;
		}
		if(sum!=0)
			cout[i]='$';
	}
	for(i=n-1;i>=0;i--)
	{
		sum=0;
		if(a[i]!=-1)
			continue;
		for(j=i;j>=0;j--)
		{
			sum=sum+a[j];
			if(sum==0)
				break;
		}
		if(sum!=0)
			cout[i]='?';
    }
	for(i=0;i<n;i++)
		printf("%c",cin[i]);
	printf("\n");
	for(i=0;i<n;i++)
		printf("%c",cout[i]);
	printf("\n");
	}
}
