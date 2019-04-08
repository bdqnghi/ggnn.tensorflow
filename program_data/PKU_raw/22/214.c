void main()
{
	int a[300]={0},i,j=0,k,m,n,s=0,t,b[10],l,count=0;
	char c[10000]={0};
	int ave,max=0;
	gets(c);
	l=strlen(c);
	for(i=0;i<l;i++)
	{
		if(c[i]!=',')
			a[j]=a[j]*10+c[i]-'0';
		else
			j++;
	}
	for(i=0;i<=j;i++)
		if(a[i]>max)
			max=a[i];
	for(i=0;i<=j;i++)
		if(a[i]==max)
			a[i]=0;
		max=0;
	for(i=0;i<=j;i++)
		if(a[i]>max)
			max=a[i];
	if(max==0)
		printf("No");
	else printf("%d",max);
}