int main ()
{
	int a[1000],i,n,sum=0;
	char word[1000][40]={""};
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%s",word[i]),
		a[i]=strlen(word[i]);
	for(i=0;i<n-1;i++)
	{	sum=sum+a[i]+1;
	
	if(sum+a[i+1]<81)
		printf("%s ",word[i]);
	else
		printf("%s\n",word[i]),
		sum=0;
	}
	printf("%s",word[n-1]);
	return 0;
}
