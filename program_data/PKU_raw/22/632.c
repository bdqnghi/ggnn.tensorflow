int main()
{
	char s[1000]={'\0'};
	int a[300]={0},i=1,j=0,n,k;
	gets(s);n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]!=',')
			a[j]=a[j]*10+s[i]-48;
		else
			j++;
	}
	n=j+1;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{k=a[j];a[j]=a[j+1];a[j+1]=k;}
		}
	}
	k=0;
	for(i=n-1;i>=0;i--)
		if(a[i]!=a[n-1])
		{
			printf("%d",a[i]);k++;break;
		}
     if(k==0)
		 printf("No");

	return 0;
}

