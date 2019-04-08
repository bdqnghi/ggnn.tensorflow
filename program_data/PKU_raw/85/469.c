void main()
{
	int n,i,j,k;
	char a[1500][20];
	int b[1500];
	int c[1500]={0};    //???????0 ????1
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		b[i]=strlen(a[i]);
	}
	for(j=0;j<n;j++)
	{
		k=0;
		for(i=0;i<b[j];i++)
		{
			if((a[j][i]>='a'&&a[j][i]<='z')||(a[j][i]>='A'&&a[j][i]<='Z')||(a[j][i]>='0'&&a[j][i]<='9')||(a[j][i]=='_'))
				k++;
		}
		if(k==b[j])
			c[j]=1;	
		if((a[j][0]>='0')&&(a[j][0]<='9'))    //??????~
			c[j]=0;
	}
	for(j=0;j<n;j++)
	{
		if(c[j]==0)
			printf("no\n");
		else
			printf("yes\n");
	}
}
