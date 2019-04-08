void main()
{
	char s1[250],s2[250];
	int a[250],b[250],c[250]; 
	int i,j,len1,len2,max;
	for(i=0;i<250;i++)
	{
		a[i]=0;
		b[i]=0;
		c[i]=0;
	}

	scanf("%s %s",s1,s2);
	len1=strlen(s1);
	len2=strlen(s2);
	for(i=0;i<len1;i++)
		a[len1-i-1]=s1[i]-'0';
	for(i=0;i<len2;i++)
		b[len2-i-1]=s2[i]-'0';
	if(a[0]==0&&b[0]==0&&len1==1&&len2==1)
		printf("0");
	else
	{
	for(i=0;i<len1||i<len2;i++)
	{
		if(a[i]+b[i]+c[i]<10) c[i]=a[i]+b[i]+c[i];
		else
		{
			c[i]=a[i]+b[i]+c[i]-10;
			c[i+1]=c[i+1]+1;
		}
	}

	if(len1>len2) max=len1;
	else max=len2;

	for(i=max;i>=0;i--)
	{
		if(c[i]!=0) break;
	}

	for(j=i;j>=0;j--)
		printf("%d",c[j]);
	printf("\n");
	}
}





