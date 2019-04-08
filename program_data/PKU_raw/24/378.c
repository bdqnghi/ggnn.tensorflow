void main()
{
	char a[50][50];
	int min,b[50],i=0,max=0,*p,j;
	while(scanf("%s",a[i])!=EOF)
	{b[i]=strlen(a[i]);i++;}
	for(j=0,min=b[0];j<i;j++)
	{
		if(b[j]>max)
			max=b[j];
		if(b[j]<min)
			min=b[j];
	}
	for(j=0;j<i;j++)
		if(b[j]==max)
		{printf("%s\n",a[j]);break;}
		for(j=0;j<i;j++)
		if(b[j]==min)
		{printf("%s",a[j]);break;}
}

