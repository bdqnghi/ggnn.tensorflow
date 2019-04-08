void main()
{
	int a[300]={0};
	char b[300]={'\0'};
	int j,i,m=0,t,p;
	for (i=0;;i++)
	{
		scanf("%d",&a[i]);
		scanf("%c",&b[i]);
		if (b[i]=='\n') break;
	}
	if (i==0) printf("No");
	else
	{
	for (j=0;j<=i;j++)
		for (p=0;p<i;p++)
			if (a[p]<a[p+1])
			{
				t=a[p];
				a[p]=a[p+1];
				a[p+1]=t;
			}
	for (j=0;j<=i;j++)
		if (a[j]==a[0]) m++;
	if (m==(i+1)) printf("No");
	else printf("%d",a[m]);
}
}
			
