int convert(int a,int b,char str[])
{
	int i,m=0;
	for(i=a+1;i<b;++i)
		m=m*10+(str[i]-'0');
	return(m);
}
main()
{
	char str[5000];
	int len,i,j,count=1,comma[2000],max;
	gets(str);
	len=strlen(str);
	comma[0]=-1;
	for(i=0;i<len;++i)
		if(str[i]==',')
		{
			comma[count]=i;
			count++;
		}
	comma[count]=len;
	int a[2000],b[2000],c[2000];
	for(i=0;i<1000;++i)
		c[i]=0;
	for(i=0;i<count;++i)
		a[i]=convert(comma[i],comma[i+1],str);
	scanf("%d",&b[0]);
	for(i=1;i<count;++i)
		scanf(",%d",&b[i]);
	for(i=0;i<1000;i++)
		for(j=0;j<count;++j)
			if(i>=a[j]&&i<b[j])
				c[i]++;
	max=c[0];
	for(i=1;i<1000;++i)
		if(c[i]>max)
			max=c[i];
	printf("%d %d",count,max);
}

