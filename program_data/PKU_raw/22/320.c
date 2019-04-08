void main()
{
	char a[1000];
	int b[300]={0},i,j,n,max;
	gets(a);
	n=strlen(a);
	for(i=0,j=0;i<n;i++)
	{
		if(a[i]==',')
			j++;
		else
			b[j]=b[j]*10+(a[i]-'0');
	}
	max=b[0];
	for(i=0;i<=j;i++)
		max=b[i]>max?b[i]:max;
	for(i=0;i<=j;i++)
		if(b[i]==max)
			b[i]=-1;
	max=b[0];
	for(i=0;i<=j;i++)
		max=b[i]>max?b[i]:max;
	if(max==-1)
		printf("No");
	else
		printf("%d",max);
}
