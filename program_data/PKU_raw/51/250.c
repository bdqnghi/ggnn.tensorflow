int main()
{
	int n,i,j,len,m,count,c[300]={0},max;
	char s[501],t[300][5],*p,temp[501];
	for(i=0;i<5;i++)
		for(j=0;j<300;j++)
			t[j][i]='\0';
	scanf("%d\n",&n);
	gets(s);
	strcpy(temp,s);
	//puts(temp);
	len=strlen(s);
	for(i=0;i<=len-n;i++)
	{
		j=0;
		m=i;
		for(count=0;count<n;count++)
			t[i][j++]=s[m++];
	}
	for(i=0;i<len-n;i++)
	{
		for(j=i+1;j<=len-n;j++)
			if(strcmp(t[i],t[j])==0) c[i]++;
	}
	max=c[0];
	for(i=0;i<=len-n;i++)
			if(c[i]>max) max=c[i];
	if(max==0)
	{
		printf("NO\n");
		return 0;
	}
	printf("%d\n",max+1);
	for(i=0;i<=len-n;i++)
		if(c[i]==max) printf("%s\n",t[i]);
	//printf("%s\n",t[2]);
	return 0;
	}
