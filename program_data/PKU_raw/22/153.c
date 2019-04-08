void main()
{
	int i,j,k,t;
	unsigned int a[300];
	char c;
	for(i=0;i<=300;i++)
	{
		scanf("%d",&a[i]);
		scanf("%c",&c);
		if(c!=',')break;
	}
	if(i==0){printf("No\n");goto a;}
	else
	{
	for(j=i;j>=1;j--)
		for(k=0;k<j;k++)
			if(a[k]<a[k+1])
			{
				t=a[k];
				a[k]=a[k+1];
				a[k+1]=t;
			}
	}
	if(a[0]==a[i])
	{printf("No\n");goto a;}
	else 
		for(j=0;j<=i;j++)
	{
		if(a[j+1]<a[j])
		{
			printf("%d\n",a[j+1]);
			break;
		}
	}
a:;
}
