void main()
{
	char str1[100],str2[100];int n,i,j,k,p;
	int a[100],b[100];
	int yidegeshu,erdegeshu;
	scanf("%d",&n);
	for(p=0;p<=n-1;p++)
	{
		scanf("%s",str1);
		scanf("%s",str2);
		yidegeshu=strlen(str1);
		erdegeshu=strlen(str2);
		for(i=0;i<=yidegeshu-1;i++)
			a[i]=str1[yidegeshu-i-1]-48;
		for(i=0;i<=erdegeshu-1;i++)
			b[i]=str2[erdegeshu-i-1]-48;
		for(j=erdegeshu;j<=yidegeshu-1;j++)
			b[j]=0;
	for(i=0;i<=yidegeshu-1;i++)
	{
		if(a[i]>=b[i])
		{a[i]=a[i]-b[i];}
		else if(a[i]<b[i])
		{
			a[i]=a[i]+10;
		    a[i+1]=a[i+1]-1;
			a[i]=a[i]-b[i];
		}
	}
	for(k=yidegeshu-1;k>=0;k--)
	{	printf("%d",a[k]);}
	printf("\n");
	}
}



	