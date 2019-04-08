int main()
{	int i,j,n,h,k;
	int c[500]={0};
	char a[500];
	char b[500][5];
	scanf("%d",&n);
	scanf("%s",a);
	for(i=0;i<strlen(a)-n+1;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[i+j];
		}
	}
	for(i=0;i<strlen(a)-n+1;i++)
	{
		for(j=i+1;j<strlen(a)-n+1;j++)
		{
			h=1;
			for(k=0;k<n;k++)
			{
				if(b[i][k]!=b[j][k])
				{
					h=0;
					break;
				}
			}
				if(h==1)
					c[i]++;
			
		}
	}
	h=c[0];
	for(i=1;i<strlen(a)-n+1;i++)
	{
		if(h<c[i]) h=c[i];
	}
	if(h<=0) printf("NO");
	else
	{
		printf("%d\n",h+1);
	for(i=0;i<strlen(a)-n+1;i++)
	{
		if(h==c[i])
		{
			for(k=0;k<n;k++)
			{
				printf("%c",b[i][k]);
			}
			printf("\n");
		}
	}
	}
	return 0;
}