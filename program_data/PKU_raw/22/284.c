void main()
{
	char s[1000];
	int a[100]={0},k=0,i,j,l;
		scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='0'&&s[i]<='9')
			a[k]=a[k]*10+s[i]-48;
		if(s[i]==',')
			k=k+1;
	}
	for(i=0;i<k;i++)
		for(j=0;j<k-i;j++)
		{
			if(a[j]<a[j+1])
			{
				l=a[j];
				a[j]=a[j+1];
				a[j+1]=l;
			}
		}
	if(a[0]==a[k])
		printf("No");
	else if(a[0]!=a[k])
	{
		for(i=0;i<=k;i++)
		{
			if(a[0]-a[i]>0)
			{
				printf("%d",a[i]);
				break;}
			else
				continue;
		}
	}
}
