void main()
{
	int a[300]={0};
	char c;
	int i=0,n,j;
	while((c=getchar())!='\n')
	{
		if(c>='0'&&c<='9')
			a[i]=a[i]*10+c-'0';
		else i++;
	}
	if(i==0)
		printf("No");
	else
	{
		int max=0;
		for(j=0;j<=i;j++)
			if(a[j]>max)
				max=a[j];
		for(j=0;j<=i;j++)
			if(a[j]==max)
				a[j]=0;
		max=0;
		for(j=0;j<=i;j++)
			if(a[j]>max)
				max=a[j];
		if(max!=0)
			printf("%d",max);
		else printf("No");
	}
}
				
		