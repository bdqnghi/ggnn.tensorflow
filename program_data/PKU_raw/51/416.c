int main()
{
	int n;
	char s[501];
	scanf("%d",&n);
	scanf("%s",s);
	char c[500][5];
	int i,count[500]={0},j,k,t,len;
	len=strlen(s);
	int m=0;
	for(i=0;i<=len-n;i++,m++)
	{
		k=i;
		for(j=0;j<n;j++,k++)
			c[m][j]=s[k];
		c[m][j]='\0';
		for(t=0;t<m;t++)
			if(strcmp(c[m],c[t])==0)
			{
				m--;
				count[t]++;
				break;
			}
	}
	int max=count[0];
	for(j=1;j<i;j++)
		if(count[j]>max) 
			max=count[j];
	if(max==0)
		printf("NO");
	else 
		{
			printf("%d\n",max+1);
			for(j=0;j<i;j++)
				if(count[j]==max)
					printf("%s\n",c[j]);
	}
}
