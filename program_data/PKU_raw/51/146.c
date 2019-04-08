void main()
{
	char a[505],b[505][6]={0};
	int n,i,j,t,c[505],max=1,y=1;
	scanf("%d",&n);
	scanf("%s",a);
	int l=strlen(a);
	for(i=0;i<=l-n;i++)
	{
		t=i;
		for(j=0;j<n;j++)
		{
		    b[i][j]=a[t];
			t++;
		}
	}
	for(i=0;i<l-n;i++)
	{
		c[i]=1;
		for(j=i+1;j<=l-n;j++)
		{
			if(strcmp(b[i],b[j])==0) c[i]++;
		}
		if(c[i]>=max) 
		{
			max=c[i];
		}
	}
	if(max==1) printf("NO");
	else
	{
	printf("%d\n",max);
	for(i=0;i<=l-n;i++)
	{
		
		if(c[i]==max) printf("%s\n",b[i]);
	}
	}
}
