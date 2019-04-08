void main()
{
	char c1[10000],c2[10000];
	int len,i,j,b=0,k=0,a[1200][2],t[1200]={0},max=0;
	gets(c1);
	gets(c2);
	len=strlen(c1);
	for(i=0;i<len;i++)
	{
		if(c1[i]!=','&&b==0)
		{
			a[k][0]=c1[i]-'0';
			b=1;
		}
		else if(c1[i]!=',')
		{
			a[k][0]=a[k][0]*10+c1[i]-'0';
		}
		else if(c1[i]==',')
		{
			b=0;
			k++;
		}
	}
	k=0;
	b=0;
	len=strlen(c2);
	for(i=0;i<len;i++)
	{
		if(c2[i]!=','&&b==0)
		{
			a[k][1]=c2[i]-'0';
			b=1;
		}
		else if(c2[i]!=',')
		{
			a[k][1]=a[k][1]*10+c2[i]-'0';
		}
		else if(c2[i]==',')
		{
			b=0;
			k++;
		}
	}
	for(i=0;i<=k;i++)
	{
		for(j=a[i][0];j<a[i][1];j++) t[j]++;
	}
	for(i=0;i<1000;i++)
	{
		if(t[i]>max) max=t[i];
	}
	printf("%d %d",k+1,max);
}
