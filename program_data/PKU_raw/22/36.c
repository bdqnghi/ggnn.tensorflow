void main()
{
	int i,k=0,p=0;
	int max=0,submax=0;
	int a[300]={0};
	char string[1500];
	gets(string);
	for(i=0;i<(int)strlen(string);i++)
	{
		if(string[i]!=',')
			a[k]=a[k]*10+string[i]-'0';
		else k++;
	}
	if(k==0)
	{
		printf("No");
		return;
	}
	for(i=0;i<k;i++)
		if(a[i]!=a[i+1])
		{
			p=1;
			break;
		}
	if(p==0)
	{
		printf("No");
		return;
	}
	for(i=0;i<=k;i++)
	{
		if(a[i]>max)
		{
			submax=max;
			max=a[i];
		}
		else if(a[i]==submax) continue;
		else if(a[i]>submax&&a[i]<max) submax=a[i];
	}
	printf("%d",submax);
}
