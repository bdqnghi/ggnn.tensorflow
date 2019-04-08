void main()
{
	char a[1300]={0};
	int i,j,b[400]={0},n,l,count=0,max,sec;
	scanf("%s",a);
	l=strlen(a);
	for(i=0,j=0;i<l;i++)
	{
		if(a[i]==',')
		{
			j++;
		}
		else
		{
			b[j]=10*b[j]+a[i]-'0';
		}
	}
	n=j+1;

	for(j=0,max=b[0];j<n;j++)
		if(max<b[j])
			max=b[j];

	for(j=0,sec=0;j<n;j++)
		if(b[j]!=max&&b[j]>=sec)
		{
			count++;
			sec=b[j];
		}
	if(count)
		printf("%d",sec);
	else
		printf("No");
}